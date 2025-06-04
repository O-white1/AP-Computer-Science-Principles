.data
	prompt: .asciiz "Enter Number: "
.text
main:
	# *** Take in 3 Numbers w/ Prompt *** #
	
	la $a0, prompt
	li $v0,4
	syscall
	li $v0, 5
	syscall
	move $t0, $v0 # t0 = num1
	la $a0, prompt
	li $v0,4
	syscall
	li $v0, 5
	syscall
	move $t1, $v0 # t1 = num2
	la $a0, prompt
	li $v0,4
	syscall
	li $v0, 5
	syscall
	move $t2, $v0 # t2 = num3
	
	move $a0, $t0
	move $a1, $t1
	move $a2, $t2
	jal order3
	li $v0, 1
	syscall
	move $a0, $a1
	syscall
	move $a0, $a2
	syscall
	

exit:
	li $v0, 10
	syscall
	

order3:	
	bgt $a0, $a1, exchange1
	bgt $a1, $a2, exchange2
	b next
exchange1:	
	xor $a0, $a0, $a1	#a = a ^= b
	xor $a1, $a1, $a0	#b = b ^= a
	xor $a0, $a0, $a1	#a = a ^= b
	b order3
exchange2:	
	xor $a1, $a1, $a2	#b = b ^= c
	xor $a2, $a2, $a1	#c = c ^= b
	xor $a1, $a1, $a2	#b = b ^= c
	b order3
next:		
	jr $ra
