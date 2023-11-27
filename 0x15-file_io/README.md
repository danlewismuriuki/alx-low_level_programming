# 0x15-file_io

## Description
This project explores file I/O in the C programming language.
It includes various functions for reading from and writing to files.

0-read_textfile.c`: Function to read a text file and print it to the standard output.
- `1-create_file.c`: Function to create a file and write a given text into it.
- `2-append_text_to_file.c`: Function to append text at the end of a file.
- `3-cp.c`: Program to copy the content of one file to another file.

## Functions
1. `ssize_t read_textfile(const char *filename, size_t letters)`: Reads a text file and prints it to the standard output.
2. `int create_file(const char *filename, char *text_content)`: Creates a file and writes a given text into it.
3. `int append_text_to_file(const char *filename, char *text_content)`: Appends text at the end of a file.

## Usage
- Ensure that the necessary header file `holberton.h` is included in your source files.
- Compile the source files along with the provided functions.
- Use the functions in your program to perform file I/O operations.

## Examples
### Reading a Text File
```c
