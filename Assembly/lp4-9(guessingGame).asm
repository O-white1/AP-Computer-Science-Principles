.data
	prompt:    .asciiz "Enter Number Between 1 and 20"
	printCPU:     .asciiz "\nCPUs number is: "
	printUSR:  .asciiz "\nYour Number: "
	printWin:  .asciiz "\nYou Win!"
	printLose: .asciiz "\nYou Lose!"


.text
	main:
		#generate a number between [1-20] using syscall 42
		li $a1, 20 # a1 = max (20)
		li $v0, 42 #a0 = randint(0, a1) [exclusive]
		syscall
		add $s0, $a0, 1 # s0 = a0+1(min)
		#user input
		la $a0, prompt
		li $v0, 4 #print prompt
		syscall
		li $v0, 5
		syscall #enter number: v0 = readInt
		move $t0, $v0 # t0 = v0
		#Show CPU Number
		la $a0, printCPU
		li $v0, 4 #print prompt
		syscall
		move $a0, $s0 # a0 = s0
		li $v0, 1 # printInt(a0)
		syscall
		#Show CPU Number
		la $a0, printUSR
		li $v0, 4 #print prompt
		syscall
		move $a0, $t0 # a0 = t0
		li $v0, 1 # printInt(a0)
		syscall
		#if (t0 != s0) goto do_lose
		bne $t0, $s0, do_lose
	do_win:
		la $a0, printWin
		li $v0, 4
		syscall
		j exit
	do_lose:
		la $a0, printLose
		li $v0, 4
		syscall
	exit:
		li $v0, 10
		syscall
		
		