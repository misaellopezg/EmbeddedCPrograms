/*
 * main.c
 *
 *  Created on: Apr 13, 2020
 *      Author: Misael
 */

#include <stdio.h>

int sum(int a, int b);

int main()
{
	printf("%d", sum(10,20));
	return 0;
}

int sum(int a, int b)
{
	int sum = a+b;
	return sum;
}
