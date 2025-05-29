#prog54b
.data:
	msg_sum: .asciiz "The sum of the 4 numbers is: "
	msg_avg: .asciiz "\n The Average of the four numbers is: "


	
.text:
	main:
		#Assign numbers
		li $t0, 475
		li $t1, 821
		li $t2, 369
		li $t3, 562	
		
		#Calculate sum := t4
		add $t4, $t0, $t1 # t4 = t0 + t1
		add $t4, $t4, $t2 # t4 += t2 // t4 = t4 + t2
		add $t4, $t4, $t3 # t4 += t3 // sum
		
		#print sum
		la $a0, msg_sum # a0 = msg_sum // print_str(a0)
		li $v0, 4 # print string
		syscall
		
		
		move $a0, $t4 # a0 = t4
		li $v0, 1  #print int
		syscall
		
		#calculate integer part of AVG := t6 (sum/4)
		li $t5, 4
		div $t4, $t5 # lo = int(t4/t5) hi = t4 % t5
		mflo $t6 # t6 = lo
		# mfhi $t7 # remainder
		
		#print avg
		
		la $a0 msg_avg # a0 = msg_avg
		li $v0, 4 #print String a0
		syscall
		
		move $a0 $t6 #a0 = t6
		li $v0, 1
		syscall
		#end
	
	
	exit:
		li $v0, 10
		syscall
		
		