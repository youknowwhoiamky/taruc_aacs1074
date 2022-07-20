#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main() {
	char staff1[256], staff2[256], name[256];
	int age;
	char gender;
	float sales1, sales2, income;
	char ch1, ch2, ch3;

	printf("Enter staff name: ");
	gets(staff1);

	printf("Enter sales amount: ");
	scanf("%f", &sales1);

	printf("Enter staff name: ");
	rewind(stdin);
	gets(staff2);

	printf("Enter sales amount: ");
	scanf("%f", &sales2);

	printf("Enter <name> <age> <gender> <income>: ");
	scanf("%s %d %c %f", &name, &age, &gender, &income);

	printf("Enter 1st character> ");
	rewind(stdin);
	ch1 = getchar();

	printf("Enter 2nd character> ");
	rewind(stdin);
	ch2 = getchar();

	printf("Enter 3rd character> ");
	rewind(stdin);
	ch3 = getchar();

	printf("---------------------------------------\n");

	printf("=======================================\n");
	printf("%-30s %8.2f\n", staff1, sales1);
	printf("%-30s %8.2f\n", staff2, sales2);

	printf("Name   : %s\n", name);
	printf("Age    : %d\n", age);
	printf("Gender : %c\n", gender);
	printf("Income : %.2f\n", income);

	printf("ASCII value for character %c is %d\n", ch1, ch1);
	printf("ASCII value for character %c is %d\n", ch2, ch2);
	printf("ASCII value for character %c is %d\n", ch3, ch3);

	printf("One\tTwo\tThree\n");
	printf("Orange, my favourite fruit.\rBanana\n");
	printf("I am only 26\b\b18.\n");
	printf("This create a beep. \a\n");
	printf("This part is shown.\0This part is gone.");
	printf("\nThese are \'single quotes\'.\n");
	printf("These are \"double quotes\".\n");
	printf("And this is \\ the backward slash.\n");
}