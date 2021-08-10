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
	scanf("%d",&a);
	fflush(stdin);
	res = a|0x00000038;
	printf("Bit toggle result: %d\n", res);
	printf("Press any key to continue.");
	fflush(stdout);
	getchar();

}
