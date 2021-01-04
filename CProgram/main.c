#include <reg51.h>

intt0() interrupt 1  { 
	if (P3 == 0) {
		P3 = 100; 
	} else {
		P3 = 0;
	}
}

main(){
	TMOD = 1;  
	IT1 = 1;
  ET0 = 1;      
  TR0 = 1;       
  EA = 1;       

  while(1);    
}



















/*
#include <reg51.h>

intt0() interrupt 1  { 
	P3++; 
}

main(){
	TMOD = 1;      
  ET0 = 1;      
  TR0 = 1;       
  EA = 1;       

  while(1);    
}
*/


















/*
#include <reg51.h>

intt0() interrupt 0   
{ 
   P2 = TH0;
   P3 = TL0;
   TL0 = 0;
	 TH0 = 0; 
    }
main()
{ 
	TMOD = 9;
  TR0 = 1;      
   EX0 = 1;
   IT0 = 1;
   EA = 1;
  while(1);    
}
*/
