#include<stdio.h>

void main(void) {
	short vshort = 32767;
	unsigned short ushort = 64556;
	int vint = 2147483647;
	unsigned int uint = 4294967295;
	long vlong = 6464637373;
	unsigned long ulong = 848484848;
	float vfloat = 2.2f;
	double vdouble = 23.23F;


	/** Print statements **/
	printf("Short: %hd\n", vshort);
	printf("Unsigned short: %hu\n", ushort);
	printf("Integer: %d\n", vint);
	printf("Unsigned integer: %d\n", uint);
	printf("Long: %l\n", vlong);
	printf("Unsigned long: %lu\n", vlong);
	printf("Float: %f\n", vfloat);
	printf("Double: %F\n", vdouble);
	
}
