#include<stdio.h>

int main() {
	int a, b, c;

	printf("Input first number: ");
	scanf_s("%d", &a);
	printf("Input second number: ");
	scanf_s("%d", &b);
	printf("Input third number: ");
	scanf_s("%d", &c);

	//Calculate area of a circle
	double result = (a + b) - c;

	//print results
	printf("Result = %f \n", result);

	return 0;
}