.data
	prompt: .asciiz "Enter Integer: "

.text
	main:
		la $a0, prompt
		li $v0, 4
		syscall
		
		#Read Integer
		li $v0, 5 #Syscall readint, stores in $v0
		syscall
		
		#Print Integer
		move $a0, $v0 # a0 = v0
		li $v0, 1 # #syscall for print Int
		syscall
	exit:
		li $v0, 10
		syscall
		
		
		
	