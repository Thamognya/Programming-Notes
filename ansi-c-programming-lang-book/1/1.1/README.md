# Notes

```c
printf("Hello world\n
");
```
will produce an error with the c compiler

```c
#include <stdio.h>

main()
{
    printf("Hello, ");
    printf("world");
    printf("\n");
}
```
will be the same as

```c
#include <stdio.h>

main()
{
    printf("Hello World!\n");
}
```

\n is a new line
