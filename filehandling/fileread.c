#include<stdio.h>

void filereadc();
void filereads();
void filereadformatted();
void main(void) {
	filereads();
}


void filereadc() {
	FILE *fp = fopen("hello.txt", "r");
	char ch;
	printf("File handling in c""\n");
	int count = 0;
	while((ch = fgetc(fp))!=EOF) {
		printf("%d : %c\n",++count , ch);
	}
}

void filereads() {
	FILE *fp = fopen("hello.txt", "r");
	char ch[50];
	printf("File handling in c""\n");
	int count = 0;
	while(fgets(ch, 50, fp)!=NULL) {
		printf("%s", ch);
	}
}

void filereadformatted() {
	FILE *fp = fopen("hello.txt", "r");
	char ch[50];
	printf("File handling in c""\n");
	int count = 0;
	while(fscanf(fp,"%*s %s", ch)==1) {
		printf("%s", ch);
	}
}



