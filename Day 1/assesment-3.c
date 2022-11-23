#include<stdio.h>

int main() {
	int r;

	printf("Input a radius of a circle: ");
	scanf_s("%d", &r);

	//Calculate area of a circle
	double area = 3.1416 * r * r;

	//print results
	printf("Area = %f \n", area);

	return 0;
}