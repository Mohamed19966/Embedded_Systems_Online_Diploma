/*
 * main.c
 *
 *  Created on: Oct 30, 2021
 *      Author: GATEZ
 */

#include "stdio.h"

void main(){

	int i,num,sum=0;

	printf("Enter an integer: ");
	fflush(stdout);
	scanf("%d", &num);

	for(i =0; i<=num;i++){
		sum+= i;
	}
	printf("Sum = %d", sum);
}
