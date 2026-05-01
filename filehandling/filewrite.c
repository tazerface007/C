#include<stdio.h>

void main(void) {
	FILE *fp = fopen("hello.txt", "w");
	fputs("Hello, World", fp);
	fclose(fp);
}
