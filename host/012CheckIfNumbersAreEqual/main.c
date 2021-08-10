/*
 * main.c
 *
 *  Created on: Apr 27, 2020
 *      Author: Misael
 */

#include <stdio.h>

int main()
{
	int a,b;
	printf("Hello! Enter two numbers:\n");
	fflush(stdout);
	scanf("%d %d",&a,&b);
	fflush(stdin);
	//printf("%d, %d", a, b)\n;
	if(a==b)
	{
		printf("Numbers entered are equal!\n");
	}
	else
	{
		if(a>b)
		{
			printf("%d is bigger than %d!\n", a,b);
		}
		else
		{
			printf("%d is bigger than %d!\n", b,a);
		}
	}
	printf("Press any key to exit the program.");
	fflush(stdout);
	getchar();
	return 0;
}
