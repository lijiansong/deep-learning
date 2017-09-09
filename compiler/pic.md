## PIC (Position Independent Code)
- The text pages of the file need not be relocated and thus can be shared among multiple process.
- ELF linkers supports PIC with a global offset table (GOT) in each shared library. Notice: GOT contains pointer to all the static data reference in the program.
- For Global Offset Table(short for GOT): To be an indirection table and accessed when PIC calls functions and operates on data variables. It always consumes no space in executables and allocate memory when loading. The values in GOT will be evaluated at runtime by linker.
- Procedure Linkage Table is for procedure only. To support dynamic linking, each ELF shared libraries or executables that uses shared libraries has a PLT. Adds a level of indirection for function calls analogous to that provided by the GOT for data.



## REFERENCE
- CSc453 Linking and Loading
