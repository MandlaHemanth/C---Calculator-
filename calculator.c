#include<stdio.h>
void sumof(float x, float y) {
	float sum = x + y;
	printf("%.2f + %.2f = %.2f \n",x, y, sum);
}
void minusof(float x, float y) {
	float minus = x - y;
	printf("%.2f - %.2f = %.2f\n", x, y, minus);
}
void multof(float x, float y) {
	float mult = x * y;
	printf("%.2f * %.2f = %.2f \n", x, y, mult);
}
void divof(float x, float y) {
	if (y != 0) {
		float div = x / y;
		printf("%.2f / %.2f = %.2f\n", x, y, div);
	} else { 
	printf("Error: y can not be zero");
	}
}

int main()	{
	char operation;
	float a;
	float b;
	char choice;
	do {
	printf("enter your operation: ");
	scanf(" %c", &operation);
	printf("enter your first number: ");
	scanf("%f", &a);
	printf("enter your second number: ");
	scanf("%f", &b);
	if (operation == '+') {
		sumof(a, b);
	} else if (operation == '-') {
		minusof(a, b);
	} else if(operation == '*') {
		multof(a, b);
	}else if (operation == '/') {
		divof(a, b);
	} else {
		printf("Error: please enter a operation (+, - , *, /): ");
	}
	printf("\n Do you want to perform another operation(y/n): ");
	scanf(" %c", &choice);
	} while (choice == 'y' or choice == 'Y');
	printf("Thanks for using this calculator .\n");
return 0;
}
	