## 0-object_like_macro.h

This header file defines a macro named `OBJ` that can be used to create object-like macros.

### Usage

To use the `OBJ` macro, you first need to define the macro with the following syntax:

```c
#define OBJ(name, ...) obj_t *obj_new_##name(void __VA_ARGS__)


This will define a macro named `obj_new_##name` that takes a variable number of arguments and returns a pointer to an object of type `obj_t`. The `__VA_ARGS__` macro expands to the list of variable arguments passed to the `OBJ` macro.

Once you have defined the `OBJ` macro, you can use it to create new objects of type `obj_t`. The following example shows how to create a new object of type `obj_t` with two integer fields, `x` and `y`:

c
OBJ(point, int x, int y)


This will define a macro named `obj_new_point` that takes two integer arguments, `x` and `y`, and returns a pointer to an object of type `obj_t`. The `x` field of the object will be set to the value of the `x` argument, and the `y` field of the object will be set to the value of the `y` argument.

To create a new object of type `point`, you can call the `obj_new_point` macro with the following syntax:

c
obj_t *point = obj_new_point(10, 20);


This will create a new object of type `point` with the `x` field set to 10 and the `y` field set to 20.

### obj_t Structure

The `obj_t` structure is defined as follows:

c
typedef struct obj_t {
  void (*destroy)(obj_t *obj);
  void *data;
} obj_t;


The `destroy` field is a pointer to a function that will be called to destroy the object when it is no longer needed. The `data` field is a pointer to a block of memory that can be used to store data associated with the object.

### Example

The following example shows how to use the `OBJ` macro to create a new object of type `point` and then destroy the object:

c
OBJ(point, int x, int y)

int main() {
  obj_t *point = obj_new_point(10, 20);

  printf("x = %d, y = %d\n", point->data[0], point->data[1]);

  obj_destroy(point);

  return 0;
}
