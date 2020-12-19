global          _ft_strcpy

section         .text

_ft_strcpy:
                mov     rax, rdi
                mov     rbx, 0
_loop:
                mov     bl, [rsi]
                mov     [rdi], bl
                inc     rsi
                inc     rdi
                cmp     bl, 0
                jne     _loop
                ret