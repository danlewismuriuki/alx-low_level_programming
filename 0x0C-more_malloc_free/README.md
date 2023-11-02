README.md
More malloc, free
This repository contains a set of programming exercises that teach students how to use the malloc() and free() functions in C. These functions are used to allocate and deallocate memory dynamically, which is an essential skill for any C programmer to know.

Exercises
The exercises in this repository cover a variety of topics, including:

Allocating memory for arrays
Allocating memory for strings
Reallocating memory
Freeing memory
Avoiding memory leaks
Instructions
To complete the exercises in this repository, you will need to have a working knowledge of C programming. Once you have completed the exercises, you should be able to use the malloc() and free() functions effectively in your own programs.

Getting started
To get started, clone this repository to your local machine:

git clone https://github.com/AdekunleAdeniran/low_level_programming.git
Once you have cloned the repository, navigate to the 0x0B-more_malloc_free directory and compile the exercises:

gcc *.c -o more_malloc_free
You can then run the exercises by typing ./more_malloc_free.

Tips
Here are some additional tips for using malloc() and free():

Always check the return value of malloc(). If malloc() returns NULL, it means that it was unable to allocate memory.
Always free any memory that you allocate with malloc(). If you do not free the memory, it will leak, which can lead to performance problems and crashes.
Be careful when reallocating memory. If you reallocate memory to a smaller size, you may lose data.
When allocating memory for arrays, remember to allocate enough space for the null terminator.
