# Notes

## Hexadecimel

RGB combines a certain amoutn of red green and blue

    #FF0000 is red
    #00FF00 is green
    #0000FF is blue
    #000000 is black
    #FFFFFF is white

0F is 15

10 is 16

and etc.

largest number iwht 2 digits is 
FF

255

in binary
11111111

hexadecimal treats units as 4 bits

0x14 is hexadecimel
but 14 is decimel

# Pointer

Pointer is a variable that stores the address of some value or the location of some value.

& variable is used to get the address of a variable.
to stoere the address in a piece of memory, you use *

```c
int n = 50;
int *p = &n;
printf("%p\n", *p); // %p is the special format code for priting pointers
```
Pointers were 32 bits but now they are 8 bytes or 64 bits.

pointers point to another memeory location.


```c
string s = "Hello";
char *s = "Hello";
```

Take this for example

```c
    char *s = get_string("s: "); // returns the first address of first char
    char *t = s;
    t[0] = toupper(t[0]);
    printf("S: %s\n", s);
    printf("t: %s\n", t);
```

s and t point to the same memory location.
hence both are capitilized

# Dyanmic Memory

malloc is a function that allocates memory for you.

free is a function that frees memory.