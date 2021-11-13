/*
 * main.c
 *
 *  Created on: Nov 13, 2021
 *      Author: Mohamed Osama
 */


#include "stdio.h"
#include"string.h"

int main(){
	char text[1000];
	int i,frequesncy=0;
	char a;
	printf("Enter a string: ");
	fflush(stdout);
	gets(text);

	printf("Enter a character to find frequency: ");
	fflush(stdout);
	scanf("%c",&a);

	for(i=0;i<strlen(text);i++){
		if(text[i]==a){
			frequesncy++;
		}
	}

	printf("Frequency of %c = %d",a,frequesncy);
	fflush(stdout);
	return 1 ;
}


