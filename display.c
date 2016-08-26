#include<16f628a.h>
//#fuses XT, NOWDT, NOPROTECT, BROWNOUT, PUT, NOLVP,INTRC_IO

void main(){
	while(TRUE){
		//marcha 1 pra frente
		if(input(pin_a0) & input(pin_a1) & input(pin_a6)){
			output_low(pin_a3);
			output_high(pin_b0);
			output_high(pin_b1);
			output_low(pin_b2);
			output_low(pin_b3);
			output_low(pin_b4);
			output_low(pin_b5);
			output_low(pin_b6);
			output_high(pin_b7);
		}
		//marcha 2 pra frente
		else if(input(pin_a0) & input(pin_a1)){
			output_high(pin_a3);
			output_high(pin_b0);
			output_low(pin_b1);
			output_high(pin_b2);
			output_high(pin_b3);
			output_low(pin_b4);
			output_high(pin_b5);
			output_low(pin_b6);
			output_high(pin_b7);
		}
		//marcha 3 pra frente
		else if(input(pin_a1)){
			output_high(pin_a3);
			output_high(pin_b0);
			output_high(pin_b1);
			output_high(pin_b2);
			output_low(pin_b3);
			output_low(pin_b4);
			output_high(pin_b5);
			output_low(pin_b6);
			output_high(pin_b7);
		}
		//marcha 4 pra frente
		else if(input(pin_a2)){
			output_low(pin_a3);
			output_high(pin_b0);
			output_high(pin_b1);
			output_low(pin_b2);
			output_low(pin_b3);
			output_high(pin_b4);
			output_high(pin_b5);
			output_low(pin_b6);
			output_high(pin_b7);
		}
		//marcha 1 pra tras
		else if(input(pin_a0) & input(pin_a6) & input(pin_a7)){
			output_low(pin_a3);
			output_high(pin_b0);
			output_high(pin_b1);
			output_low(pin_b2);
			output_low(pin_b3);
			output_low(pin_b4);
			output_low(pin_b5);
			output_high(pin_b6);
			output_low(pin_b7);
		}
		//marcha 2 pra tras
		else if(input(pin_a0) & input(pin_a7)){
			output_high(pin_a3);
			output_high(pin_b0);
			output_low(pin_b1);
			output_high(pin_b2);
			output_high(pin_b3);
			output_low(pin_b4);
			output_high(pin_b5);
			output_high(pin_b6);
			output_low(pin_b7);
		}
		//marcha 3 pra tras
		else if(input(pin_a7)){
			output_high(pin_a3);
			output_high(pin_b0);
			output_high(pin_b1);
			output_high(pin_b2);
			output_low(pin_b3);
			output_low(pin_b4);
			output_high(pin_b5);
			output_high(pin_b6);
			output_low(pin_b7);
		}
		//ponto morto
		else{
			output_high(pin_b7);
			output_high(pin_a3);
			output_high(pin_b0);
			output_high(pin_b1);
			output_high(pin_b2);
			output_high(pin_b3);
			output_high(pin_b4);
			output_low(pin_b5);
			output_high(pin_b6);
			output_high(pin_b7);
		}
	}
}