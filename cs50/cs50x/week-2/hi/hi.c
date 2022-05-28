#include <stdio.h>

int main()
{
    // define array of chars
    char c[3];
    // assign values to chars
    c[0] = 'H';
    c[1] = 'I';
    c[2] = '!';
    // using for loop to print array
    for (int i = 0; i < 3; i++)
    {
        // print charecter i from array if using %c
        printf("%c", c[i]);
        // print space
        printf(" ascii = ");
        // print ascii values using %i
        printf("%i", c[i]);
        // print space
        printf(" | ");
    }
    // print new line
    printf("\n");
    // return 0
    return 0;
}