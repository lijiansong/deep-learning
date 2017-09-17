## Peephole Optimization
- After code generation, look at adjacent instructions(a "peephole" on the code stream), and try to replace adjacent instructions with something faster. e.g., 
```
sw $8, 12($fp)
lw $12, 12($fp)
```
will be replaced with
```
sw $8, 12($fp)
mv $12, $8
```
