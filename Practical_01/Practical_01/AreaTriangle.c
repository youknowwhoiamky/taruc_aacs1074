#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

main()
{
	// declare variables
	int base, height;
	double area;

	// program statements
	// input
	printf("Enter base: ");
	scanf("%d", &base);
	printf("Enter height: ");
	scanf("%d", &height);

	// process
	area = 1.0/2 * base * height;

	// output
	printf("Area = %0.2f\n", area);
	
	system("pause");
}