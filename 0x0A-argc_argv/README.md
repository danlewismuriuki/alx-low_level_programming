argc and argv
The argc and argv variables are used to access the command line arguments passed to a program. The argc variable is an integer that represents the number of command line arguments, and the argv variable is an array of pointers to strings, where each string represents a command line argument.

The first element of the argv array is a pointer to the program name, and the other elements of the array are pointers to the command line arguments.

To use the argc and argv variables, you would simply pass them to the main() function of your program. The main() function will then be able to access the command line arguments using the argc and argv variables.
