#include<stdio.h>

int calculateUsingFormula(int n) {
	 return (n * (n + 1) * ((2 * n) + 1))/ 6;
}

int calculateUsingRecursive(int n) {
	int sum = n * n;
	if (n != 0) {
		sum += calculateUsingRecursive(n - 1);
	}
	return sum;
}

int main() {
	int n;

	printf("Please Enter value of n:");
	scanf_s("%d", &n);

	printf("Sum of n squer value using formula = %d\n", calculateUsingFormula(n));

	printf("Sum of n squer value using Recursive = %d\n", calculateUsingRecursive(n));

	return 0;
}