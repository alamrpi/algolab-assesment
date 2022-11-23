#include<stdio.h>

int main() {
	int x, y, z;

	printf("Enter value of x: ");
	scanf_s("%d", &x);
	printf("Enter value of y: ");
	scanf_s("%d", &y);
	printf("Enter value of z: ");
	scanf_s("%d", &z);

	//Calculate area of a circle
	double result = ((2 * x) + (5 * y)) - (3 * z);
	//print results
	printf("Result = %f \n", result);

	return 0;
}