#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc == 2) // the name of the program and the one word after
    {
        printf("%s %s\n", "Hello", argv[1]);
    }
    else
    {
        printf("%s\n", "Hello, World!");
    }
}