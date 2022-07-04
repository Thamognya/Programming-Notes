#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    char *s = get_string("s: "); // returns the first address of first char
    char *t = get_string("t: ");
    printf("%p\n", s);
    printf("%p\n", t);
}