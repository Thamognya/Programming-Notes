#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string names[7] = {"John", "Jane", "Mary", "Patricia", "Linda", "Barbara", "Elizabeth"};
    for (int i = 0; i < 7; i++)
    {
        if (strcmp(names[i], "hermione") == 0) // return 0 if equal but in 0 would represent false while for us 0 is true
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}