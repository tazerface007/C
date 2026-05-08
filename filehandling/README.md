# File Handling in C

File handling in c is the process in which we create, open, read, write and close operations on a file.
- C language provides different functions such as fopen(), fwrite(), fread(), fseek(), fprintf(), etc.

## Opening a file in c

- For opening a file in C, the **fopen()** function is used with the filename or file path along with the required access modes.

```C
#include<stdio.h>
#include<stdlib.h>

int main() {
    // File pionter to store the
    // value returned by fopen
    FILE* fptr;


    // Opening the file in read mode
    fptr = fopen("filename.txt", "r");

    // checking if the file is opened successfully
    if (fptr == NULL) {
        printf("The file is not opened.");
        }
        return 0;
}
```
**Output**: The file is not opened.

- The file is not opened because it does not exist in the source directory. 
- But the **fopen()** function is also capable of creating a file if it does not exists.

***Note: It is essential to check for NULL values that might be returned by the fopen() function to avoid any errors.***

**Syntax of fopen()**

```C
FILE* fopen(*file_name, *access_mode);
```
**Parameters**:
- **file_name**: name of the file when present in the same directory as the source file, otherwise, full path of the file.
- **access_mode**: specifies for what operation the file is being opened.

**Return Value:**
- If the file is opened successfully, return a file pointer to it.
- If the file is not opened, then return NULL.


## **File Opening Modes**

File opening modes or access modes specify the allowed operations on the file to be opened. They are passed as an argument to the fopen() function. Some of the commonly used file access modes are listed below:

|**Opening Modes**|**Description**|
|:---------------:|:-------------:|
| r | Searchs file, if the file is opened successfully, fopen() loads it into memory and set up a pointer that points to the first character in it. If the file cannot opened fopen() return NULL.|
| rb | Open a file for reading in binary mode. If the file not exists, fopen return NULL |
| w | Open for writing in text mode. If the file exists, its content are overwritten. If the file doesn't exists, a new file is created. Return NULL if unable to open the file. |
| wb | Open for writing in binary mode. If the file exists, contents are overwritten. If the file does not exist, it will be created. |
| a | Searches file. If the file is opened successfully fopen() loads it into memory and sets up a pointer that points to the last character in it. It only open in the append mode. if the file does not exist, it will be created. Return NULL, if unable to open the file.|
| ab | Open for append in binary mode. Data is added to the end of the file. If the file does not exists, it will be created.|
| r+ | Searches file. If it is open successfully fopen() loads it into memory and sets up a pointer that points to the first character in it. Return NULL if unable to open the file. | 
| rb+ | Open for both reading and writing in binary mode. If the file does not exist, fopen() return NULL. |
| w+ | Search file. If the file exists, its content are overwritten. if the file doesnot exists a new file is created. Return NULL, if unable to open the file. |
| wb+ | Open for both reading and writing in binary mode. If the file exists, its content are overwritten. If the file does not exists, it will be created. |
| a+ | Searches file. If the file is opened successfully fopen() loads it into memory and sets up a pointer that points to the last character in it. It opens the file in both reading and append mode. If the file doesn't exist, a new file is crated. Return NULL, if unable to open the file.|
| a+ | Open for both reading and appending in binary mode. If the file does not exist, it will be created. |


## Create a File 

The fopen() function can not only open a file but also can create a file it does not exist already. for that we have to use modes that allow creation of a file if not found such as **w, w+, wb, wb+, a, a+, ab and ab+**.

```c
#include<stdio.h>
#include<stdlib.h>

int main() {
    FILE* fptr;

    fptr = fopen("file.txt", "w");

    if (fptr == NULL) {
        printf("The file is not opened.");
    } else {
        printf("The file is created successfully.");
        }
        retrn 0;
    }
```

## Write to a File

The file write operations can be performed by the functions fprintf() and fputs(). C programming also provides some other function that can be used to write data to a file such as:

|**Function**|**Description**|
|:----------:|:-------------:|
| fprintf()  | Similar to printf(), this function uses formatted string and variable argument list to print output to the file.|
| fputs() | Print the whole line in the file and a newline at the end. |
| fputc() | Print a single character into the file|
| fputw() | Print a number to the file. |
| fwrite() | This function writes the specified number of bytes to the binary file. |

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE* fptr;

    char data[50] = "Hello World, Hope you are doing great job";

    fptr = fopen("file.txt", "w");

    if (fptr == NULL) {
        printf("The file is not opened");
        } else {
            printf("The file is now opened");
        }
        fputs(data, fptr);
        fputs("\n", fptr);
        fclose(fptr);

        printf("Data successfully written in file");
        printf("The file is closed now.");
        return 0;
    }
```

## Reading From a File

The file read operation in C can be performed using functions fscanf() or fgets(). Both the functions performed the same operation as that of scanf() and get but with an additional perameter, the file pointer. There are other function we can use to read from a file. 

|**Function**|**Description***|
|:----------:|:--------------:|
| fscanf()   | Use formatted string and variable argument list to take input from a file. |
| fgets() | Input the whole line from the file. |o| fgetc() | Reads a single character from the file | 
| fgetw() | Reads a number from a file |
| fread() | Reads a specified bytes from data from a binary file. |

```c
#include<stdio.h>
#include<stdlib.h>

int main() {

    FILE* fptr;

    char data[50];
    fptr = fopen("file.txt", "r");

    if(fptr == NULL) {
        printf("file.txt file failed to open.");
    } else {
        printf("The file is now opened.\n");

        while (fgets(data, 50, fptr) != NULL) {
            printf("%s", data);
        }
        fclose(fptr);
    }
}
```
***Note: The getc() and some other file reading functions return EOF (End Of File) when they reach the end of the file while reading. EOF indicated the end of the file, and its value is implmenentation defined. Reading more after EOF result in undefined error so, it is always recommended to check for EOF while reading a file.***

## Closing a File

The fclose() function is used to close the file. After successful file operations, you must always close a file to remove it from the memory.

```c
fclose(file_pointer);
```

## Move File Pointer

- File pointer generally points to the position according to the mode or last read/write operation. we can manually move this pointer to any position in the file using fseek() function.


```c
fseek(fptr, offset, pos);
```

- Where **pos** is the position from where offset is counted and offset is the number of positions to shift from pos (it can be negative or positive).


