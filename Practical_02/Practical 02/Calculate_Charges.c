#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

main() {
	double charge;
	int km, days;

	printf("Enter Days: ");
	scanf("%d", &days);

	printf("Enter KM: ");
	scanf("%d", &km);

	charge = (days * 25) + (km * 0.4);

	printf("Total Charges: %0.2f \n", charge);

	system("pause");
}