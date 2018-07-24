# 0x0D. C - Structures, typedef
This repository contains project 0x0D which introduces the use and familiarity with structures and the ```typedef```keyword in C. Below are the list of files and their descriptions.

## 0. Structures & Typedef
File: [dog.h](https://github.com/fcantor/holbertonschool-low_level_programming/blob/master/0x0D-structures_typedef/dog.h)

This header file defines a new type ```struct dog``` with the following elements:
* ```char *name```
* ```float age```
* ```char* owner```

---

Also in this header is a new ```struct dog``` type, ```dog_t```

## Initializing a Struct
File: [1-init_dog.c](https://github.com/fcantor/holbertonschool-low_level_programming/blob/master/0x0D-structures_typedef/1-init_dog.c)

This function initializes a variable of type ```struct dog```

## Printing a Struct
File: [2-print_dog.c](https://github.com/fcantor/holbertonschool-low_level_programming/blob/master/0x0D-structures_typedef/2-print_dog.c)

This function prints a ```struct dog```. If an element of the struct is NULL, it prints ```(nil)``` instead of the element. If the struct is NULL, it doesn't print anything.

## Creating an Instance of a Struct Through a Function
File: [4-new_dog.c](https://github.com/fcantor/holbertonschool-low_level_programming/blob/master/0x0D-structures_typedef/4-new_dog.c)

This function ```new_dog``` creates an instance of the ```struct dog```

## Freeing Pointers Through a Function
File: [5-free_dog.c](https://github.com/fcantor/holbertonschool-low_level_programming/blob/master/0x0D-structures_typedef/5-free_dog.c)

This function frees pointers used in 4-new_dog.c and it's main function. Output at exit using valgrind is 0 bytes in 0 blocks.