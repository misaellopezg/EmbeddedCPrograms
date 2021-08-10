/*
 * main.c
 *
 *  Created on: May 2, 2020
 *      Author: Misael
 */

#include <stdio.h>
#include <stdint.h>

int main()
{
	int32_t a,res;
	printf("Enter a number:\n");
	fflush(stdout);
	scanf("%d", &a);
	res = a&1;
	if(res == 1)
	{
		printf("Number is odd!\n");
	}
	else
	{
		printf("Number is even!\n");
	}
	printf("Press any key to exit.");
	fflush(stdout);
	fflush(stdin);
	getchar();

}
