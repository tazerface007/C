#include<stdio.h>
#include<wchar.h>
#include<stdlib.h>
#include<locale.h>

void write();
void writenum();
void main(void) {
	setlocale(LC_ALL, "");
	write();
	}

void write() {
FILE *fp = fopen("hello.txt", "w");
	fputs("Hello, World", fp);
	fclose(fp);
}

/*
void writenum(){
	FILE* fp;
	int i = 0;
	fp = fopen("num.txt", "a+");
	wchar_t *text = L"Hello, 世界!";
	for(i = 0; text[i] != L'\0'; i++) {
		if(fputw(text[i], file) == WEOF) {
			perror("Error writing to the file");
			fclose(fp);
		}
	}
*/
