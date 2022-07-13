#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

main() {
	char firstName[255], lastName[255];
	int heightCM;
	double heightIN;

	int ageInYears, ageInDays;

	printf("Enter your first name: ");
	gets(firstName);

	printf("Enter your last name: ");
	gets(lastName);

	printf("Enter your age in \"years\"");
	scanf("%d", &ageInYears);

	printf("Enter your height in \"cm\": "); 
	scanf("%d", &heightCM);

	heightIN = heightCM / 2.54;

	ageInDays = ageInYears * 365;

	printf("%s %s\n", firstName, lastName);
	printf("Your height is %f inches.\n", heightIN);
	printf("Your age is %d in days!!!.\n", ageInDays);

	system("pause");
}