#include<stdio.h>

int main() {
	int a, b;
	int sum, sub, multi, div;
	printf("Input the first number: ");
	scanf_s("%d", &a);
	printf("Input the last number: ");
	scanf_s("%d", &b);

	if (b > a) {
		int temp = a;
		a = b;
		b = temp;
	}

	//Calculate summation of twio number
	sum = a + b;
	
	//Calculate Subtration
	sub = a - b;

	//Calculate Multiplication
	multi = a * b;

	//Calculate Division
	div = a / b;

	//print results
	printf("Summation = %d \n", sum);
	printf("Subtration = %d \n", sub);
	printf("Multiplication = %d \n", multi);
	printf("Division = %d \n", div);
	return 0;
}