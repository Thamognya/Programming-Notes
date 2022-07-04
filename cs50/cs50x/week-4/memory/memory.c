#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *x = malloc(3 * sizeof(int)); // asigns memory for 3 ints to x
    x[1] = 72;
    x[2] = 73;
    x[3] = 33; // touching memory not allowed to (buffer overflow)
    free(x);
}