/*** This Program demonstrate the adapter pattern or more specific a context pattern of creating a generic pointer to a function that can be passed to a callback function ***/
#include<stdio.h>

typedef void (*callback_t)(void *context);

struct MyParams {
	int id;
	const char *name;
};

void my_actual_function(void *context) {
	
	struct MyParams* params = (struct MyParams *) context; // typecasted to the MyParams type.
	printf("Now utilizing the params passed: %d  %s\n", params->id, params->name);

}

void callback_function(callback_t cb, void *context);

struct MySecondParams {
	const char *firstname;
	const char *lastname;
};

void my_second_callback_function(void *value) {
	struct MySecondParams* param = (struct MySecondParams*) value;
	printf("Hello, %s %s", param->firstname, param->lastname);

}

void main() {
	struct MyParams param = {101, "ActionHandler"};
	struct MySecondParams param2 = {"Tazer", "Face"};
	callback_function(my_actual_function, &param);
	callback_function(my_second_callback_function, &param2);

}

void callback_function(callback_t cb, void *context){
	printf("Callback function will now going to be called\n");
	cb(context);
}

