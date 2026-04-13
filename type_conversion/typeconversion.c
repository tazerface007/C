#include<stdio.h>

void main() {
	int x = 5, y = 2, sum;
	printf("Implicit conversion from float result to int: %d/%d = %d""\n", x, y, (x/y));
	printf("Explicit conversion from Int result to Float: %d/%d = %.1f""\n", x, y, (float)x/(float)y); 

}
