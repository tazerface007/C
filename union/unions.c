#include<stdio.h>

union data{
	int value;
};

void main() {
	union data holder;
	holder.value = 23;
	printf("Union data holder value: %d""\n", holder.value);

}
