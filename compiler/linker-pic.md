## PIC (Position Independent Code)
- The text pages of the file need not be relocated and thus can be shared among multiple process.
- ELF linkers supports PIC with a global offset table (GOT) in each shared library. Notice: GOT contains pointer to all the static data reference in the program.
- For Global Offset Table(short for GOT): To be an indirection table and accessed when PIC calls functions and operates on data variables. It always consumes no space in executables and allocate memory when loading. The values in GOT will be evaluated at runtime by linker.
- Procedure Linkage Table is for procedure only. To support dynamic linking, each ELF shared libraries or executables that uses shared libraries has a PLT. Adds a level of indirection for function calls analogous to that provided by the GOT for data.
- by 'ar -t /usr/lib/libctemplate.a | sort' see its object code dependencies

## linker
- For compilation and assembly, it will translate the source code to machine language. However, the result may still not be suitable for execution, because of unresolved references to external and library routines. During the linking stage, the linker will bring together the binaries of separately compiled modules and search libraries and resolve external references. While the loader will bring an object program into memory for execution, such as allocate memory, initialize environment, maybe fix up addresses.
- Contents of an object file contain:
  - header infomation which is the overall information about the file and its contents.
  - Object code and data
  - Relocations (may be omitted in executables), it contains the information to help fix up the object code during linking.
  - Symbol table (optional), it contains the information about symbols defined in this module and symbols to be imported from other modules.
  - Debugging information
- For the linker, it has two functions:
  - `Fixing Address`. Addresses in an object file are usually relative to the start of the code or data segment in that file. When different object files are combined, the same kind of segments (text, data, read-only data, etc.) from the different object files will get merged. Addresses have to be “fixed up” to account for this merging. The fixing up is done by the linker, using information embedded in the executable for this purpose (“relocations”).
  - `Symbol Resolution`. Suppose module B defines a symbol x, module A refers to x. The linker must determine the location of x in the object module obtained from merging A and B. And modify references to x (in both A and B) to refer to this location.
- 

## REFERENCE
- CSc453 Linking and Loading
