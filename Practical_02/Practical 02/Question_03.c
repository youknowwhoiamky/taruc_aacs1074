#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

main() {
	char firstName[255], lastName[255];
	int heightCM;
	double heightIN;

	printf("Enter your first name: ");
	gets(firstName);

	printf("Enter your last name: ");
	gets(lastName);

	printf("Enter your height in \"cm\": ");
	scanf("%d", &heightCM);

	heightIN = heightCM / 2.54;

	printf("%s %s\n", firstName, lastName);
	printf("Your height is %f inches.\n", heightIN);

	system("pause");
}