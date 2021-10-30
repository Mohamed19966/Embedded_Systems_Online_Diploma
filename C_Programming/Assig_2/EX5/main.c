/*
 * main.c
 *
 *  Created on: Oct 30, 2021
 *      Author: GATEZ
 */


#include"stdio.h"
#include"ctype.h"

void main(){

	char c,lower;
	printf("Enter a character: ");
	fflush(stdout);
	scanf("%c", &c);
	lower = tolower(c);

	if (lower > 97 && lower < 122){
		printf("%c is an alphabet", c);
	}
	else{
		printf("%c is a character", c);
	}
	fflush(stdout);

}
