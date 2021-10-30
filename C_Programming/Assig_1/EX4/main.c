/*
 * main.c
 *
 *  Created on: Oct 30, 2021
 *      Author: GATEZ
 */

#include "stdio.h"

void main() {

	float num1 , num2 ;
	fflush(stdout);
	printf("Enter two numbers:");
	fflush(stdout);
	scanf("%f %f", &num1,&num2);
	printf("Product: %f",num1*num2);

}

