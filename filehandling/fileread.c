#include<stdio.h>

void main(void) {
	FILE *fp = fopen("hello.txt", "r");
	char ch;
	printf("File handling in c""\n");
	int count = 0;
	while((ch = fgetc(fp))!=EOF) {
		printf("%d : %c\n",++count , ch);
	}
}
