/*
 * main.c
 *
 *  Created on: Oct 30, 2021
 *      Author: GATEZ
 */


#include "stdio.h"

void main(){
	char operator;
	float operand_1 ,operand_2;

	printf("Enter operator either + or - or * or divide : ");
	fflush(stdout);
	scanf("%c", &operator);

	printf("Enter two operands: ");
	fflush(stdout);
	scanf("%f %f", &operand_1, &operand_2);

	switch (operator){

		case'-':{
			printf("%0.1f - %0.1f = %0.1f",operand_1,  operand_2 , operand_1 - operand_2 );
		}
		break;
		case'+':{
			printf("%0.1f + %0.1f = %0.1f",operand_1, operand_2 , operand_1 + operand_2 );
		}
		break;
		case '*':{
			printf("%0.1f * %0.1f = %0.1f",operand_1, operand_2 , operand_1 * operand_2 );
		}
		break;
		case'/' :{
			printf("%0.1f * %0.1f = %0.1f",operand_1, operand_2 , operand_1 / operand_2 );
		}
		break;
		default:{
			printf("invalid operator");
		}
	}
	fflush(stdout);
}
