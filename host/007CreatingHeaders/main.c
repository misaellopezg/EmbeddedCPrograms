/*
 * main.c
 *
 *  Created on: Apr 13, 2020
 *      Author: Misael
 */

#include <stdio.h>
#include "mymath.h"

int main()
{
	int num1 = 30;
	int num2 = 6;
	printf("%d\n",fctn_add(num1,num2));
	printf("%d\n",fctn_sub(num1,num2));
	printf("%d\n",fctn_mult(num1,num2));
	printf("%d\n",fctn_div(num1,num2));

	return 0;
}
