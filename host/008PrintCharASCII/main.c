/*
 * main.c
 *
 *  Created on: Apr 22, 2020
 *      Author: Misael
 */

#include <stdio.h>
int main()
{
	char a;
	char b;
	char c;
	printf("Enter three characters!\n");
	fflush(stdout);
	scanf("%c %c %c",&a,&b,&c);
	printf("ASCII codes are: %d, %d, %d !\n", a,b,c);
	fflush(stdout);
	printf("Press any character to exit.\n");
	fflush(stdout);
	fflush(stdin);
	getchar();
	return 0;
}

