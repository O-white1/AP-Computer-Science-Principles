.data
	prompt:  .asciiz "Enter Number: "
	EvenMSG: .asciiz "\nThe number is even"
	OddMSG:  .asciiz "\nThe number is odd"
	
.text
	main:
		EnterNumberAndPrompt:
		la $a0, prompt
		li $v0, 4 # print prompt
		syscall
		li $v0, 5 # Enter Number
		syscall
		Calculation:
		move $t0, $v0 # t0 = choice number
		li $s0, 2
		div $t0, $s0 # divide choice number by 2
		mfhi $t1 # t1 = lo
		mflo $t2 # t2 = hi
		beq $t1, $zero, isEqual
		notEqual:
		la $a0, OddMSG
		li $v0, 4
		syscall
		j exit
		isEqual:
		la $a0, EvenMSG
		li $v0, 4
		syscall
	exit:
		li $v0, 10
		syscall
		
			
