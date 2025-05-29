.data
	prompt: .asciiz "Enter number: "
	sumOut: .asciiz "Sum: "
	difOut: .asciiz "\nDif: "

.text
main:
	Input1:
	la $a0, prompt  #l load prompt into a0
	li $v0 4 # print string prompt
	li $v0 5 # v0 = readInt()
	syscall
	move $t0, $v0 # t0 = v0 // t0 = num1
	Input2:
	la $a0, prompt  #l load prompt into a0
	li $v0 4
	li $v0 5 # v0 = readInt()
	syscall
	move $t1, $v0 # t0 = v0 // t0 = num2
	Calculate:
	li $v0 1
	add $t2, $t0, $t1 # num1+num2
	sub $t3, $t0, $t1 # num1-num2
	move $a0, $t2 # a0 = sum
	Output:
	li $v0 4 #print string
	la $a0, sumOut #load sum out
	syscall
	li $v0 1 #print int
	move $a0, $t2 #load sum
	syscall
	li $v0 4
	la $a0, difOut
	syscall
	li $v0 1 # print int
	move $a0, $t3 # load dif
	syscall
exit:
	li $v0, 10
	syscall