#include<stdio.h>

struct student {
	char *name;
	short age;
};

void printStudentDetails( struct student* ptr) {
	printf("Name: %s""\n", ptr->name);
	printf("Age: %d""\n", ptr->age);
}

int main(void) {
	struct student s;
	s.name = "Deepak Suryawanshi";
	s.age = 26;
	printStudentDetails(&s);

}
