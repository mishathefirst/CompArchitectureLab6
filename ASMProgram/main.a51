 iseg at 30h
 Stack ds 4

  cseg at 0  
  jmp start

  cseg at 3h 
  jmp intt00 

  cseg at 40h
start: 
	mov SP, #?Stack - 1 
	setb TMOD.7
	setb IT1
	setb ET0
	setb TR0 
	setb  EA 
Cikl:  
	add a,#0x100
  	Jmp cikl           
	
intt00:  
	push ACC   
    push PSW
	mov a, P3
	jz PA
	mov a, 0
	jmp OI
	PA:
		mov a, 1
	OI:
		mov P3, a
		Pop PSW
		Pop ACC
		Reti
end
