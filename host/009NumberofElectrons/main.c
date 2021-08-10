/*
 * main.c
 *
 *  Created on: Apr 22, 2020
 *      Author: Misael
 */

#include <stdio.h>
int main()
{
	double electron = 1.60217662e-19;
	double charge = 0.0;
	double res = 0;
	printf("Enter the current charge: !\n");
	fflush(stdout);
	scanf("%lf",&charge);
	res = charge/electron;
	printf("Number of electrons in charge: %lf !\n", res);
	fflush(stdout);
	printf("Press any character to exit.\n");
	fflush(stdout);
	fflush(stdin);
	getchar();
	return 0;
}

