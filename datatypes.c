#include<stdio.h>

void main(void) {
	short vshort = 32767;
	unsigned short ushort = 65535;
	int vint = 2147483647;
	unsigned int uint = 488323232;
	float vfloat = 2.2f;
	double vdouble = 3.146F;
	long double ldouble = 3.146F;
	char vchar = 'A';
	unsigned char uchar = 'A';
	typedef enum {MONDAY,TUESDAY,WEDNESDAY,THRUSDAY,FRIDAY,SATURDAY,SUNDAY} WEEK;
	WEEK week = WEDNESDAY;
	typedef struct {int data;}package;
	package pkg;
	pkg.data = 32;


	
	printf("Short: %hd""\n", vshort);
	printf("Unsigned Short: %hu""\n", ushort);
	printf("Int: %d""\n", vint);
	printf("Unsigned Int: %u""\n", uint);
	printf("Float: %.2f""\n", vfloat);
	printf("Double: %F""\n", vdouble);
	printf("Long Double: %lF""\n", vdouble);
	printf("Char: %c""\n", vchar);
	printf("Unsigned Char: %C""\n", uchar);
	printf("Week: %u""\n", week);
	printf("Package data: %d""\n", pkg.data);
	
	
}
