# 0x0C. C - Preprocessor

This repository contains project 0x0C which solidifies current knowledge on macros (i.e. what they are and how to use them, common predefined macros), the C compilation process--specifically, the preprocessor--and include guards for header files.

## 0. Object-like Macro
File: [0-object_like_macro.h](https://github.com/fcantor/holbertonschool-low_level_programming/blob/master/0x0D-structures_typedef/5-free_dog.c)

This header file defines a macro named ```SIZE``` as an abbreviation for the token ```1024```.

## 1. Pi
File: [1-pi.h](https://github.com/fcantor/holbertonschool-low_level_programming/blob/master/0x0C-preprocessor/1-pi.h)

This header file defines a macro named ```PI``` as an abbreviation for the token ```3.14159265359```

## 2. File name
File: [2-main.c](https://github.com/fcantor/holbertonschool-low_level_programming/blob/master/0x0C-preprocessor/2-main.c)

This program prints the name of the file it was compiled from, followed by a newline.

## 3. Function-like macro
File: [3-function_like_macro.h](https://github.com/fcantor/holbertonschool-low_level_programming/blob/master/0x0C-preprocessor/3-function_like_macro.h)

This header file contains a defined function-like macro ```ABS(x)``` that computes the absolute value of a number ```x```.

4. SUM
File: [4-sum.h](https://github.com/fcantor/holbertonschool-low_level_programming/blob/master/0x0C-preprocessor/4-sum.h)

This header file contains a defined function-like macro ```SUM(x, y)``` that computes the sum of the numbers ```x``` and ```y```.

6. Fun with the preprocessor
File: [101-preprocessor_abuse.c](https://github.com/fcantor/holbertonschool-low_level_programming/blob/master/0x0C-preprocessor/101-preprocessor_abuse.c)

This program can print ```Hello, Holberton``` followed by a newline.
### Constraints:
* Not allowed to use more than one line of code
* Not allowed to use more than 32 characters, including documentation of functions and the preprocessor directives
* Not allowed to include other c files, nor other header files
* Program needs to pass ```Betty``` checks for style and documentation
* Needs to be written in C and compiled with ```gcc```