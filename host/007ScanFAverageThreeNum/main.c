/*
 * main.c
 *
 *  Created on: Apr 20, 2020
 *      Author: Misael
 */

#include <stdio.h>
int main()
{
	int a;
	int b;
	int c;
	int res = 0;
	printf("Enter your first number!\n");
	fflush(stdout);
	scanf("%d",&a);
	printf("Enter your second number!\n");
	fflush(stdout);
	scanf("%d",&b);
	printf("Enter your third number!\n");
	fflush(stdout);
	scanf("%d",&c);
	res = (a+b+c)/3;
	printf("Average calculated: %d !\n", res);
	fflush(stdout);
	printf("Press any character to exit.\n");
	fflush(stdout);
	fflush(stdin);
	getchar();
	return 0;
}
