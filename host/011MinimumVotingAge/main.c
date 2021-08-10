/*
 * main.c
 *
 *  Created on: Apr 26, 2020
 *      Author: Misael
 */

#include <stdio.h>

int main()
{
	int age;
	printf("Please enter your age to determine if you can vote:\n");
	fflush(stdout);
	scanf("%d",&age);
	if(age >17)
	{
		printf("You can vote!");
	}
	else
	{
		printf("You cannot vote...");
	}
	return 0;
}
