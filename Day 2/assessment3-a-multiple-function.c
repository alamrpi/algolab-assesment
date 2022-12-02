#include<stdio.h>

int h(int x) {
	return (x * x) + 5;
}

int g(int x) {
	return x - 2;
}

int f(int x) {
	return (2 * x * g(x)) + h(x) - 5;
}

int main() {
	int x;

	printf("Please Enter value of x:");
	scanf_s("%d", &x);

	printf("Result = %d\n", f(x));

	return 0;
}