#include<16f628a.h>
#fuses XT, NOWDT, NOLVP

//pin_a0 M1
//pin_a1 M2
//pin_a2 M3
//pin_a3 M4
//pin_a6 D1
//pin_a7 D2
//pin_b0 m5
//
//      (b6)
// 	     --
//	(b1)|  |(b5)
//      (b7)
//       --	
//	(b2)|  |(b4)
//       --
//      (b3)

void main(){
	while(TRUE){
		//marcha 1 pra frente
		if(input(pin_a1) & input(pin_a2) & input(pin_a3)){
			output_high(pin_a6);
			output_low(pin_a7);
			output_high(pin_b1);
			output_high(pin_b2);
			output_high(pin_b3);
			output_low(pin_b4);
			output_low(pin_b5);
			output_high(pin_b6);
			output_high(pin_b7);
		}
		//marcha 2 pra frente
		else if(input(pin_a2) & input(pin_a3)){
			output_high(pin_a6);
			output_low(pin_a7);
			output_high(pin_b1);
			output_low(pin_b2);
			output_low(pin_b3);
			output_high(pin_b4);
			output_low(pin_b5);
			output_low(pin_b6);
			output_low(pin_b7);
		}
		//marcha 3 pra frente
		else if(input(pin_a2)){
			output_high(pin_a6);
			output_low(pin_a7);
			output_high(pin_b1);
			output_high(pin_b2);
			output_low(pin_b3);
			output_low(pin_b4);
			output_low(pin_b5);
			output_low(pin_b6);
			output_low(pin_b7);
		}
		//marcha 4 pra frente
		else if(input(pin_b0)){
			output_high(pin_a6);
			output_low(pin_a7);
			output_low(pin_b1);
			output_high(pin_b2);
			output_high(pin_b3);
			output_low(pin_b4);
			output_low(pin_b5);
			output_high(pin_b6);
			output_low(pin_b7);
		}
		//marcha 1 pra tras
		else if(input(pin_a0) & input(pin_a1) & input(pin_a3)){
		 	output_low(pin_a6);
			output_high(pin_a7);
			output_high(pin_b1);
			output_high(pin_b2);
			output_high(pin_b3);
			output_low(pin_b4);
			output_low(pin_b5);
			output_high(pin_b6);
			output_high(pin_b7);
		}
		//marcha 2 pra tras
		else if(input(pin_a0) & input(pin_a3)){
			output_low(pin_a6);
			output_high(pin_a7);
			output_high(pin_b1);
			output_low(pin_b2);
			output_low(pin_b3);
			output_high(pin_b4);
			output_low(pin_b5);
			output_low(pin_b6);
			output_low(pin_b7);
		}
		//marcha 3 pra tras
		else if(input(pin_a0)){
			output_low(pin_a6);
			output_high(pin_a7);
			output_high(pin_b1);
			output_high(pin_b2);
			output_low(pin_b3);
			output_low(pin_b4);
			output_low(pin_b5);
			output_low(pin_b6);
			output_low(pin_b7);
		}
		//ponto morto
		else{
			output_high(pin_a6);
			output_high(pin_a7);
			output_low(pin_b1);
			output_low(pin_b2);
			output_low(pin_b3);
			output_low(pin_b4);
			output_low(pin_b5);
			output_low(pin_b6);
			output_high(pin_b7);
		}
	}
}