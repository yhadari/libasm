global      _ft_write

section     .text

_ft_write:
            mov     rax, 0x02000004
            syscall
            jb      _ex
            ret
_ex:
            mov     rax, -1
            ret