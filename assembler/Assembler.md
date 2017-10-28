## Assembler
- Assembler design options:
  - One-pass assembler
  - Multi-pass assembler
  - Two-pass assembler with overlay structure
- For two-pass assembler with overlay structure, it requires small memory, pass 1 and pass 2 are never required at the same time; it has three segments:
  - for root, it contains driver program and shared tables and subroutines
  - pass1
  - pass2
it is usually tree structure and overlay program.
- For one-pass assembler, the main problem is `forward references`， such as data items and labels on instructions; An effective solution is:
  - data items: require all such areas be defined before they are reference
  - labels on instructions: no good solution
There two types of one-pass assembler, one is `load-and-go`, it produces object code directly in memory for immediate execution, another type will produce usual kind of object code for later execution.
- For `load-and-go` one-pass assembler, it is useful for program development and testing; It avoids the overhead of writing the object program out and reading it back; Both one-pass and two-pass assemblers can be designed as load-and-go. However, one-pass also avoids the overhead of an additional pass over the source program; For a load-and-go assembler, the actual address must be known at assembly time, we can use an absolute program.
- For `Forward Reference in One-pass Assembler`, For any symbol that has not yet been defined:
  - omit the address translation
  - insert the symbol into SYMTAB, and mark this symbol undefined
  - the address that refers to the undefined symbol is added to a list of forward references associated with the symbol table entry
  - when the definition for a symbol is encountered, the proper address for the symbol is then inserted into any instructions previous generated according to the forward reference list
Besides, At the end of the program, any SYMTAB entries that are still marked with * indicate undefined symbols, you have to search SYMTAB for the symbol named in the END statement and jump to this location to begin execution. The actual starting address must be specified at assembly time.

- Assembler implementation examples, Microsoft MASM Assembler, Sun Sparc Assembler, IBM AIX Assembler and etc.
