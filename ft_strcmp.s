global          _ft_strcmp

section         .text

_ft_strcmp:
                mov     rbx, 0
                mov     rcx, 0
_loop:
                mov     bl, [rdi]
                mov     cl, [rsi]
                sub     rbx, rcx
                cmp     byte[rdi], 0
                je      _finish
                inc     rdi
                inc     rsi
                cmp    rbx, 0
                je     _loop
                mov     rax, rbx
                ret
_finish:
                cmp     byte[rsi], 0
                jne      _loop + 9
                mov     rax, 0
                ret