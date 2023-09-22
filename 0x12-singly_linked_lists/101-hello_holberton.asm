section .data
    format db 'Hello, Holberton', 0   ; Define the format string with null-termination

section .text
global main

extern printf

main:
    ; Prepare the arguments for printf
    mov edi, format  ; Load the address of the format string into edi
    xor eax, eax     ; Clear eax (set it to 0) to indicate no floating-point arguments

    ; Call printf
    call printf

    ; Exit the program
    mov eax, 0       ; Return 0 to indicate successful program execution
    ret
