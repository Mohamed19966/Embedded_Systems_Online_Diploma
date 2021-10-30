/*
 * main.c
 *
 *  Created on: Oct 30, 2021
 *      Author: GATEZ
 */


#include "stdio.h"

void main(){

	char c;

	printf("Enter an alphabet: ");
	fflush(stdout);
	scanf("%c", &c);

	switch(c){

		case'a':
		case'A':
		case'e':
		case'E':
		case'o':
		case'O':
		case'i':
		case'I':
		case'u':
		case'U':{
			printf("%c is a vowel", c);
		}
		break;
		case'w':
		case'W':
		case'y':
		case'Y':{
			printf("%c is sometimes a vowel", c);
		}
		break;
		default:{
			printf("%c is a constant", c);
		}
	}
}
