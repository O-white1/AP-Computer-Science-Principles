# Prog52a

.data
	prompt1: .asciiz "Enter Length: "
	prompt2: .asciiz "Enter Width: "
	out1:    .asciiz "Area: "
	out2:    .asciiz "\nPerimeter: "


.text
	main:
		#Input Length:
		la $a0, prompt1
		li $v0 4
		syscall
		
		li $v0 5 # v0 = readInt()
		syscall
		move $t0, $v0 # t0 = v0 // t0 = length
		
		
		la $a0, prompt2
		li $v0 4
		syscall
		
		li $v0 5 # v0 = readInt()
		syscall
		move $t1, $v0 # t1 = v0 // t1 = width
		
		
		#Area
		mult $t0, $t1 # area (t4) = length (t0) * width (t1)
		mflo $t4
		#Perim
		li $s2, 2
		mul $t8, $t0, $s2 # t8 = 2*length
		mul $t9, $t1, $s2 # t9 = 2*width
		add $t5, $t8, $t9 # perim (t5) = t8(2len) + t9(2wid)
		
		la $a0, out1
		li $v0, 4
		syscall
		move $a0, $t4 # a0 = t4
		li $v0, 1 # print int(a0)
		syscall
		
		la $a0, out2
		li $v0, 4
		syscall
		move $a0, $t5 # a0 = t4
		li $v0, 1 # print int(a0)
		syscall
		
	exit:
		li $v0, 10
		syscall
		
		
		
		