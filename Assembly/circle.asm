# ***prog54c ***
.data
	prompt: .asciiz "Enter Radius: "
	a_msg:  .asciiz "Area: "
	p_msg:  .asciiz "Perimeter: "
	endl:   .asciiz "\n"
	pi:     .float 3.14159
	two:    .float 2.0


.text
	main:
		la $a0, prompt
		li $v0, 4
		syscall
		li $v0, 6 # read float
		syscall
		mov.s $f10, $f0 #f10 = f0
		l.s $f11, pi
		#compute area
		mul.s $f2, $f10, $f10 # f12 = f10^2
		mul.s $f14, $f11, $f2 # f14 = f11(pi) * f12(r^2)
		l.s $f15, two # f15 = 2.0
		mul.s $f16, $f15, $f11 # f16 = 2.0*pi
		mul.s $f18, $f16, $f10 # f18 = f15(2*pi) * f10 (radius)
		la $a0, a_msg
		li $v0, 4
		syscall
		#print area
		mov.s $f12, $f14 # f12 = area
		li $v0, 2 #print float (f12)
		syscall
		la $a0, p_msg
		li $v0, 4
		syscall
		la $a0, endl
		li $v0, 4
		syscall
		mov.s $f12, $f18
		li $v0, 2
		syscall
	exit:
		li $v0, 10
		syscall
		