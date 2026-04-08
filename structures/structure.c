#include<stdio.h>

struct dataholder {
	int data;
};

void main() {
	struct dataholder dh;
	dh.data = 2147483647;
	printf("Data: %d""\n", dh.data);
}
