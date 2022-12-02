#include<stdio.h>


void displayName() {
	printf("I am MD. ALAM HOSSAIN \n");
}

void myAge() {
	printf("I am 23 year's old. \n");
}


int calculateX(int x) {
	 return x * x * x + 3 * x + 5;
}

int calculateXY(int x, int y) {
	return (x * x) + (x * y) - 9;
}

int calculateXYZ(int x, int y, int z) {
	return x * x + 2 * y * z - z * z;
}


int main() {
	int x, y, z;


	printf("Please Enter value of x:");
	scanf_s("%d", &x);

	printf("Please Enter value of y:");
	scanf_s("%d", &y);

	printf("Please Enter value of z:");
	scanf_s("%d", &z);

	//Display Name method
	displayName();

	//My AGe
	myAge();

	printf("f((x) = %d\n", calculateX(x));

	printf("f((x,y) = %d\n", calculateXY(x, y));

	printf("f((x,y,z) = %d\n", calculateXYZ(x, y, z));

	return 0;
}