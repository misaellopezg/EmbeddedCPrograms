/*
 * main.c
 *
 *  Created on: May 1, 2020
 *      Author: Misael
 */
#include <stdio.h>
#include <stdint.h>

int main()
{
	int a,b;
	printf("Enter two numbers (A and B):\n");
	fflush(stdout);
	scanf("%d %d", &a,&b);
	fflush(stdin);
	printf("Bitwise AND: %d\n", a&b);
	printf("Bitwise OR: %d\n", a|b);
	printf("Bitwise XOR: %d\n", a^b);
	printf("Bitwise ~A: %d\n", ~a);
	printf("Bitwise ~B: %d\n", ~b);
	printf("Press any character to exit.");
	fflush(stdout);
	getchar();
}


