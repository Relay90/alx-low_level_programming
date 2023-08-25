section .data
    hello db "Hello, Holberton", 0   ; Null-terminated string for printf

section .text
    global main
    extern printf

main:
    ; Call printf
    mov rdi, hello   ; Set the format string
    xor rax, rax     ; Clear RAX (no floating-point arguments)
    call printf

    ; Exit program
    mov rdi, 0       ; Return 0 from main
    call exit

exit:
    mov rax, 60      ; syscall number for exit
    xor rdi, rdi     ; exit status 0
    syscall
To compile 
