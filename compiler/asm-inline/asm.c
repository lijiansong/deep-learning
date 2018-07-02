int main() {
int flag, new_flag;
__asm__
(
"movl %1, %%eax \n"
"orw $2, %%ax \n"
"movl %%ax, %0 \n"
: "=r"(new_flag) /* output */
: "r"(flag)      /* input */
: "%eax"         /* clobbered register */
);
}
