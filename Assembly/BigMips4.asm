.data

.text
	main:
		li $s0, 100
		li $t0, 0 # lcv = 0 (t0)
		li $t1, 40
		
		loop:
			addi $t0, $t0, 1
			addi $t1, $t1, 20
			blt   $t0, 4, loop
			
		bgt $t1, 100, greaterOneHundred
		ble  $t1, 100, print
		greaterOneHundred:
			sub $t1, $t1, $s0
			j print
		print:
			move $a0, $t1
			li $v0, 1
			syscall
	exit:
		li $v0, 10
		syscall
		