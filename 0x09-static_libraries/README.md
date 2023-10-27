Static Libraries
Static libraries are a type of library that is linked into an executable program at compile time. This means that the code in the static library is copied into the executable program, and the executable program can then call the functions in the static library without having to load the library at runtime.

Static libraries are often used to distribute code that is shared between multiple executable programs. For example, a static library might contain functions for performing common tasks such as file I/O, mathematical operations, or string manipulation.

Building Static Libraries
To build a static library, you can use the ar command. The ar command creates an archive file, which is a collection of object files.

To build a static library from a set of object files, you would use the following command:

ar -rcs mylib.a *.o
This will create a static library called mylib.a from all the object files in the current directory.

Using Static Libraries
To use a static library in an executable program, you need to link the static library to the executable program at compile time. You can do this using the ld command.

To link a static library to an executable program, you would use the following command:

ld -lmylib myprog.o -o myprog
