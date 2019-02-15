// Sam Hopson
// CS 1412-503
// 01/24/19

#include <stdio.h>

int main(void)
{
	double num;
	
	// input for the dollar and cents amount
	printf("Please enter a dollar and cents amount. \n");
	scanf("%l\f", &num);
	
	// adds the tax to the original amount
	double f_num = num + (num * (double) .05);
	\
	printf("\nYour amount: $%.2lf \nWith tax added: $%.2lf \n \n", num, f_num);
	
	return (0);
}
