#include<stdio.h>

void greet(char *name) {
	printf("Hello, %s""\n", name);
}
void main() {
	void (*ptr)(char *name);
	ptr = greet;
	char *name = "Deepak Suryawanshi";
	ptr(name);
}
