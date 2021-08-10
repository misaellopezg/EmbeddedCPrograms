/*
 * main.c
 *
 *  Created on: Apr 9, 2020
 *      Author: Misael
 */


#include <stdio.h>
int main()
{
	char a = 'a';
	unsigned long int a_address;
	printf("Variable 'a' pointer address: %p\n",&a);
	a_address = (unsigned long int) &a;
	printf("Variable 'a' pointer address as int: %lu", a_address);
}
