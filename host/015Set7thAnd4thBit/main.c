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
	res = a|72;
	printf("4th and 7th bit toggled result: %d\n", res);
	printf("Press any key to continue.");
	fflush(stdout);
	getchar();

}
