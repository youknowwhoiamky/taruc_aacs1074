#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)
#define PI 3.14159

main() {
	double area, circumference, radius;

	printf("Enter: ");
	scanf("%lf", &radius);

	area = PI * radius * radius;
	circumference = 2 * PI * radius;

	printf("Area = %0.2f \n", area);
	printf("Circumference = %0.2f \n", circumference);

	system("pause");
}