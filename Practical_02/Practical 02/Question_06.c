#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)
#define MAXIMUM_LOAD_PERIOD 14
#define FINE_RATE 0.2

main() {
	double amountFined;
	int noBooks, daysBorrowed, overdue;

	printf("Enter number of book borrowed: ");
	scanf("%d", &noBooks);

	printf("Enter number of days borrowed: ");
	scanf("%d", &daysBorrowed);

	overdue = daysBorrowed - MAXIMUM_LOAD_PERIOD;
	amountFined = overdue * FINE_RATE;

	printf("Days overdue: %d \n", overdue);
	printf("Amount fined: %f0.2 \n", amountFined);

	system("pause");
}