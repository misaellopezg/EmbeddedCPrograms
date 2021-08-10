/*
 * main.c
 *
 *  Created on: Apr 7, 2020
 *      Author: Misael
 */

#include <stdio.h>
int main()
{
	unsigned int adist = 160;
	unsigned int bdist = 40;
	unsigned int tdist = adist + bdist;
	printf("Total distance traveled: %d + %d = %d", adist,bdist,tdist);
}
