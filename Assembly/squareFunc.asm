.data
	prompt: .asciiz "Enter Integer: "

.text
main:
	la $a0, prompt #load prompt
	li $v0, 4
	syscall
	li $v0, 5
	syscall
	move $a0, $v0
	jal square_num # v1 = square_num(a0)
	move $t0, $v1

exit:
	li $v0, 10
	syscall
	
#square_num(a0: int) -> v1 = a0^2
square_num:
	mul $v1, $a0, $a0 # v1 = a0*a0
	jr $ra # jump back to after func call
	
	