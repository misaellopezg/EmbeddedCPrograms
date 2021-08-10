/*
 * main.c
 *
 *  Created on: Apr 25, 2020
 *      Author: Misael
 */


#include <stdio.h>

int main()
{
	char mychar = 100;
	char* mycharadd = (char*)&mychar;
	printf("Variable original value: %d\n", mychar);
	printf("Variable pointer value: %p\n", mycharadd);
	printf("One byte of above pointer: %d\n", *mycharadd);
	*mycharadd = 65;
	printf("New variable value: %d\n", mychar);
	return 0;
}
