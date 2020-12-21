global      _ft_strdup

section     .text

extern  _ft_strlen
extern  _malloc
_ft_strdup:
            push    rdi
            call    _ft_strlen
            inc     rax
            mov     rdi, rax
            call    _malloc
            pop     rsi
            mov     rdi, rax
_loop:
            mov     dl, [rsi]
            mov     [rdi], dl
            inc     rdi
            inc     rsi
            cmp     dl, 0
            jne     _loop
            ret