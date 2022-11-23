#include<stdio.h>

int main() {
	int x;

	printf("Please enter value of x: ");
	scanf_s("%d", &x);

	//Calculate f(x) = 5x*x-9x+7
	int result = ((5 * x) * x)-((9 * x) + 7);

	//print results
	printf("Result = %d \n", result);

	return 0;
}