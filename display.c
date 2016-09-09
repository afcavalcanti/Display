#include<16f628a.h>
#fuses XT, NOWDT, NOLVP

//pin_a2 M1
//pin_a3 M2
//pin_b0 M3
//pin_b1 M4
//pin_b2 M5
//pin_b4 D1
//pin_b3 D2
//
//      (a1)
// 	     --
//	(a7)|  |(a0)
//      (a6)
//       --	
//	(b6)|  |(b7)
//       --
//      (b5)

void main(){
	while(TRUE){
		//KV1
		if(input(pin_a3) & input(pin_b0) & input(pin_b1)){
			output_high(pin_b4);
			output_low(pin_b3);
			output_high(pin_a1);
			output_low(pin_a0);
			output_low(pin_b7);
			output_high(pin_b5);
			output_high(pin_b6);
			output_high(pin_a7);
			output_high(pin_a6);
			
		}
		//KV2
		else if(input(pin_a2) & input(pin_a3)){
			output_high(pin_b4);
			output_low(pin_b3);
			output_low(pin_a1);
			output_low(pin_a0);
			output_high(pin_b7);
			output_low(pin_b5);
			output_low(pin_b6);
			output_high(pin_a7);
			output_low(pin_a6);
		}
		//KV3
		else if(input(pin_a2)){
			output_high(pin_b4);
			output_low(pin_b3);
			output_low(pin_a1);
			output_low(pin_a0);
			output_low(pin_b7);
			output_low(pin_b5);
			output_high(pin_b6);
			output_high(pin_a7);
			output_low(pin_a6);
		}
		//KV4
		else if(input(pin_b0)){
			output_high(pin_b4);
			output_low(pin_b3);
			output_high(pin_a1);
			output_low(pin_a0);
			output_low(pin_b7);
			output_high(pin_b5);
			output_high(pin_b6);
			output_low(pin_a7);
			output_low(pin_a6);
		}
		//KR1
		else if(input(pin_a0) & input(pin_a1) & input(pin_a3)){
		 	output_low(pin_b4);
			output_high(pin_b3);
			output_high(pin_a1);
			output_low(pin_a0);
			output_low(pin_b7);
			output_high(pin_b5);
			output_high(pin_b6);
			output_high(pin_a7);
			output_high(pin_a6);
		}
		//KR2
		else if(input(pin_a0) & input(pin_a3)){
			output_low(pin_b4);
			output_high(pin_b3);
			output_low(pin_a1);
			output_low(pin_a0);
			output_high(pin_b7);
			output_low(pin_b5);
			output_low(pin_b6);
			output_high(pin_a7);
			output_low(pin_a6);
		}
		//KR3
		else if(input(pin_a0)){
			output_low(pin_b4);
			output_high(pin_b3);
			output_low(pin_a1);
			output_low(pin_a0);
			output_low(pin_b7);
			output_low(pin_b5);
			output_high(pin_b6);
			output_high(pin_a7);
			output_low(pin_a6);
		}
		//N
		else{
			output_high(pin_b4);
			output_high(pin_b3);
			output_low(pin_a1);
			output_low(pin_a0);
			output_low(pin_b7);
			output_low(pin_b5);
			output_low(pin_b6);
			output_low(pin_a7);
			output_high(pin_a6);
		}
	}
}
