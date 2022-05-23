```c
#include <stdio.h>
#include <cs50.h>

int main(void) {
    printf("%s\n", "hello world");
    return 0;
}

```

```c
#include <stdio.h>
#include <cs50.h>

int main(void) {
    string name = get_string("hello what is your name: ");
    printf("%s%s\n", "hello", name);
    return 0;
}
```

calculator.c for calculator example

when making functions be sure to define it or prototype it at the top with

```c
void meow(int n); // declaring function or known as prototype -> return value _name_(_data_typ_-_argument_);
```

when c divides two ints,: 
```c
int n, y;
float z;
n = 1;
y = 2;
z = n / y; // output will be zero because int divided by int gives an int and storing in a float is incorrect data type
```
it always gives an int as an output hence storing it in a float would cause problems it is called truncation


