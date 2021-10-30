/*
 * main.c
 *
 *  Created on: Oct 30, 2021
 *      Author: GATEZ
 */


#include "stdio.h"

void main(){

	int num;

	printf("Enter an integer you want to check : ");
	fflush(stdout);
	scanf("%d", &num);
	if (num % 2 == 0){

		printf("%d is even", num);
	}
	else{
		printf("%d is odd", num);
	}
	fflush(stdout);
}
