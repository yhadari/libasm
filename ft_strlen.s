global      _ft_strlen

section     .text

_ft_strlen:
            mov     rax, 0
            mov     rbx, 0
_loop:
            mov     bl, [rdi + rax]
            inc     rax          
            cmp     bl, 0
            jne     _loop
            dec     rax
            ret
