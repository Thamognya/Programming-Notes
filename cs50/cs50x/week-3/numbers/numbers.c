#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // better syntax
    int numbers[] = {4, 6, 8, 2, 5, 7, 0};
    // linear search
    for (int i = 0; i < 7; i++)
    {
        if (numbers[i] == -1)
        {
            printf("Found: %i\n", i);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}