## PIC (Position Independent Code)
- The idea behind PIC is simple - add an additional level of indirection to all global data and function references in the code. By cleverly utilizing some artifacts of the linking and loading processes, it is possible to make the text section of the shared library truly position independent, in the sense that it can be easily mapped into different memory addresses without needing to change one bit.
- One immediately apparent cost is the extra indirection required for all external references to data and code in PIC. That is an extra memory load for each reference to a global variable, and for each call to a function. How problematic this is in practice depends on the compiler, the CPU architecture and the particular application.
- Another, less apparent cost, is the increased register usage required to implement PIC. In order to avoid locating the GOT too frequently, it makes sense for the compiler to generate code that keeps its address in a register (usually ebx). But that ties down a whole register just for the sake of GOT. While not a big problem for RISC architectures that tend to have a lot of general purposes registers, it presents a performance problem for architectures like x86, which has a small amount of registers. PIC means having one general purpose register less, which adds up indirect costs since now more memory references have to be made.
- If we have one program which is PIC, we can add this program to any other program, without fear that it might not work - because the PIC program has everything it needs internally.
- PIC is the code which does not need to be changed regardless of the address in which it is loaded; Enable loading the same program at different addresses: shared libraries or dynamic loading. e.g., relative jumps, reference to activation records. Its main idea: `Keep the data in a table, Use register to point to the beginning of the table, Refer to all data relative to the designated register`. To set the register, two examples:
  - Per-Routine Pointer Table, Store the pointer to the routine in the table: for caller, Load Pointer table address into RP, Load Code address from 0(RP) into RC, call via RC; for callee, RP points to pointer table, Table has addresses of pointer table for subprocedures.
  - ELF-Position Independent Code, Executable consists of code followed by data, The offset of the data from the beginning of the code is known at compile-time
- If the load address for a program is `not fixed` (e.g., shared libraries), we use position independent code. Its basic idea is that `separate code from data; generate code that doesn’t depend on where it is loaded.` PC-relative addressing can give position-independent code references. This may not be enough, e.g.: data references, instruction peculiarities (e.g., call instruction in Intel x86) may not permit the use of PC-relative addressing. 
- For ELF files, PIC is like this. It has the following characteristics: 
  - data pages follow code pages;
  - the offset from the code to the data does not depend on where the program is loaded.
  - Besides, the linker creates a global offset table (GOT) that contains offsets to all global data used. 
  - If a program can load its own address into a register, it can then use a fixed offset to access the GOT, and thence the data.
- The above is only useful if we can actually put the relative offset to work. But data references (i.e. in the mov instruction) on x86 require `absolute addresses`. So, what can we do? If we have a relative address and need an absolute address, what is missing is the value of the instruction pointer (since, by definition, the relative address is relative to the instruction's location). There is no instruction to obtain the value of the instruction pointer on x86, but we can use a simple trick to get it. For example, Code to figure out its own address (x86):
```
    call  L   /* push address of next instruction on stack */
    L: pop %ebx  /* pop address of this instruction into %ebx */
```
What happens here is:
- The CPU executes `call L`, which causes it to save the address of the next instruction (the `pop %ebx`) on stack and jump to the label.
- Since the instruction at the label is `pop %ebx`, it gets executed next. It pops a value from the stack into %ebx. But this value is the address of the instruction itself, so %ebx now effectively contains the value of the instruction pointer.

Accessing a global variable x in PIC:
  - GOT has an entry, say at position k, for x.  The dynamic linker fills in the address of x into this entry at load time.
  - Compute “my address” into a register, say %ebx (above);
  - %ebx += offset_to_GOT;       /* fixed for a given program */
  - %eax = contents of location k(%ebx)  /* %eax = addr. of x */
  - access memory location pointed at by %eax.
- For PIC, it has the following advantages:
  - Code does not have to be relocated when loaded.(However, data still need to be relocated.)
  - Different processes can share the memory pages of code, even if they don’t have the same address space allocated.
- PIC has the following disadvantages:
  - GOT needs to be relocated at load time. In big libraries, GOT can be very large, so this may be slow.
  - PIC code is bigger and slower than non-PIC code. The slowdown is architecture dependent (in an architecture with few registers, using one to hold GOT address can affect code quality significantly.)
- The text pages of the file need not be relocated and thus can be shared among multiple process.
- ELF linkers supports PIC with a global offset table (GOT) in each shared library. Notice: GOT contains pointer to all the static data reference in the program.
- For Global Offset Table(short for GOT): To be an indirection table and accessed when PIC calls functions and operates on data variables. It always consumes no space in executables and allocate memory when loading. The values in GOT will be evaluated at runtime by linker.
- Procedure Linkage Table is for procedure only. To support dynamic linking, each ELF shared libraries or executables that uses shared libraries has a PLT. Adds a level of indirection for function calls analogous to that provided by the GOT for data.
- by 'ar -t /usr/lib/libctemplate.a | sort' see its object code dependencies

## Shared Libraries
- Shared libraries have a single copy of the library that is used by all running programs. They can save (disk and memory) space by avoiding replication of library code. Virtual memory management in the OS allows different processes to share “read-only” pages, e.g., text and read-only data. This lets us get by with a single physical-memory copy of shared library code.
- For shared libraries, at link time, the linker: 
  - Searches a (specified) set of libraries, in some fixed order, to find modules that resolve any undefined external symbols.
  - Puts a list of libraries containing such modules into the executable.
- At load time, the startup code:
  - finds these libraries;
  - maps them into the program’s address space;
  - carries out library-specific initialization.
- Startup code may be in the OS, in the executable, or in a special dynamic linker.
- For statically linked shared libraries:
  - Program and data are bound to executables at link time.
  - Each library is pre-allocated an appropriate amount of address space.
  - The system has a master table of shared-library address space: libraries start somewhere far away from application code, e.g., at 0x60000000 on Linux; and read-only portions of the libraries can be shared between processes.

## Dynamic Linking
- Dynamic linking defers much of the linking process until the program starts running. It is easier to create, update than statically linked shared libraries. However, it has higher runtime performance cost than statically linked libraries: Much of the linking process has to be redone each time a program runs; Every dynamically linked symbol has to be looked up in the symbol table and resolved at runtime.
- Its basic mechanism is shown bellow:
  - A reference to a dynamically linked procedure p is mapped to code that invokes a handler.
  - At runtime, when p is called, the handler gets executed:
    - The handler checks to see whether p has been loaded already (due to some other reference);
    - if so, the current reference is linked in, and execution continues normally.
    - otherwise, the code for p is loaded and linked in.
- ELF shared libraries use PIC (position independent code), so text sections do not need relocation. Data references use a GOT: each global symbol has a relocatable pointer to it in the GOT; the dynamic linker relocates these pointers. We still need to invoke the dynamic linker on the first reference to a dynamically linked procedure: Done using a procedure linkage table (PLT); PLT adds a level of indirection for function calls (analogous to the GOT for data references).

## Linker
- Recap, Assembler generates binary code: Unresolved addresses, Relocatable addresses, while Linker generates executable code, Loader generates runtime states (images)
- `For compilation and assembly, it will translate the source code to machine language. However, the result may still not be suitable for execution, because of unresolved references to external and library routines. During the linking stage, the linker will bring together the binaries of separately compiled modules and search libraries and resolve external references. While the loader will bring an object program into memory for execution, such as allocate memory, initialize environment, maybe fix up addresses.`
- Contents of an object file contain:
  - header infomation which is the overall information about the file and its contents.
  - Object code and data
  - Relocations (may be omitted in executables), it contains the information to help fix up the object code during linking.
  - Symbol table (optional), it contains the information about symbols defined in this module and symbols to be imported from other modules.
  - Debugging information
- For the linker, it has two functions:
  - `Fixing Address`. Addresses in an object file are usually relative to the start of the code or data segment in that file. When different object files are combined, the same kind of segments (text, data, read-only data, etc.) from the different object files will get merged. Addresses have to be “fixed up” to account for this merging. The fixing up is done by the linker, using information embedded in the executable for this purpose (“relocations”).
  - `Symbol Resolution`. Suppose module B defines a symbol x, module A refers to x. The linker must determine the location of x in the object module obtained from merging A and B. And modify references to x (in both A and B) to refer to this location.
- Since each linkable module contains a symbol table, whose contents include(Information for `Symbol Resolution`):
  - Global symbols defined (maybe referenced) in the module.
  - Global symbols referenced but not defined in the module (these are generally called externals).
  - Segment names (e.g., text, data, rodata). These are usually considered to be global symbols defined to be at the beginning of the segment.
  - Non-global symbols and line number information (optional), for debuggers.
- The linker usually make two passes. The first pass will collect information about each of the object modules being linked. While the second pass will construct the output, carrying out address relocation and symbol resolution using the information collected in the first pass. While during the first pass, it will construct a table of all the object modules and their lengths. Based on this table, assign a load address to each module. For each module, the first pass will read in its symbol table into a global symbol table in the linker, and determine the address of each symbol defined in the module in the output: use the symbol value together with the module load address. While the second pass copy the object modules in the order of their load addresses. For address relocation, find each instruction that contains a memory address; to each such address, add a relocation constant equal to the load address for its module. While for external symbol resolution: for each instruction that references an external object, insert the actual address for that object
- For loading, programs are usually loaded at a fixed address in a fresh address space (so can be linked for that address). In such systems, loading involves the following actions:
  - determine how much address space is needed from the object file header;
  - allocate that address space;
  - read the program into the segments in the address space;
  - zero out any uninitialized data (“.bss” segment) if not done automatically by the virtual memory system.
  - create a stack segment;
  - set up any runtime information, e.g., program arguments or environment variables;
  - start the program executing.


## REFERENCE
- CSc453 Linking and Loading
- Linkers & Loaders
- wikipedia, position independent code, [page](https://en.wikipedia.org/wiki/Position-independent_code)
- linux die, [page](https://linux.die.net/)
- Eli Bendersky's [blog](http://eli.thegreenplace.net/2011/11/03/position-independent-code-pic-in-shared-libraries/)
- main is usually a function, [PAGE](https://mainisusuallyafunction.blogspot.com)
