
include\masm32\include\masm32rt.inc



.DATA

msg1 db "Press 1 to register: ", 0,10,13

msg3 db "Press 3 to quit.",0,10,13
msg4 db "Your choice is: ",0,10,13
msglg db "Enter username: ",0,10,13
msgps db "Enter password: ",0,10,13
space db " ",0,10,13

       



        
.DATA?

choice db 1 dup(?)

username db 4 dup(?)
password db 4 dup(?)
handle db 8 dup(?)


.CONST
   
.CODE
   
    start:


       push offset msg1        ; put in to stack the effective add of msg1
       call StdOut                  ; call console display API



       push offset msg3        
       call StdOut

       push 8                    ; set the maximum input character
       push offset choice       ; put in to stack the effective add of input storage
       call StdIn                    ; call console input API
 
       push offset msg4       ; put in to stack the effective add of msg2
       call StdOut                 ; call console display API

       push offset choice
       call StdOut

       push offset space
       call StdOut

        xor ebx, ebx
        xor esi, esi
        xor edx, edx
        


       
       xor eax, eax
        mov eax, offset [choice]
        .if (eax == 1)
        call register
        .endif




       register proc
        
       push offset msglg
        call StdOut

       push 8                    
       push offset username       
       call StdIn
       
       push offset msgps       
       call StdOut 

       push 8                    
       push offset password       
       call StdIn

       mov esi, offset username
       mov edx, offset password

       mov ebx, fcreate("user.txt")
       mov esi, fwrite(ebx,esi,8)
       


       
            ret
       register endp

     

        
       

exit:
       push 0
       call ExitProcess
end start