#include<stdio.h>

void fileread();
void main(void) {
	fileread();
}


void fileread() {
	FILE *fp = fopen("hello.txt", "r");
	char ch;
	printf("File handling in c""\n");
	int count = 0;
	while((ch = fgetc(fp))!=EOF) {
		printf("%d : %c\n",++count , ch);
	}
}

