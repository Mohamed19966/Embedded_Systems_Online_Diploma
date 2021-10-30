/*
 * main.c
 *
 *  Created on: Oct 30, 2021
 *      Author: GATEZ
 */



#include "stdio.h"

void main(){

	int i,num,factorial=1;

	printf("Enter an integer: ");
	fflush(stdout);
	scanf("%d", &num);
	if (num >= 0) {
		for(i =1; i<=num;i++){
			factorial*= i;
		}
		printf("factorial = %d", factorial);
	}
	else{
		printf("Error!!! Factorial of negative number doesn't exist");
	}
}
