section .data
    hello_msg db "Hello, Holberton", 0   ; Define a null-terminated string

section .text
    extern printf
    global _start

_start:
    ; Prepare arguments for printf
    mov rdi, hello_msg      ; Load the address of the string into rdi
    xor eax, eax            ; Clear eax (no floating point arguments)

    ; Call printf
    call printf

    ; Exit the program
    mov rax, 60             ; System call number for exit (60 for x86_64)
    xor rdi, rdi            ; Status 0
    syscall                 ; Invoke the system call

