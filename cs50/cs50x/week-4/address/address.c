#include <cs50.h>
#include <stdio.h>

typedef char* string;

int main(void)
{
    /*
    char *s = "HI!";
    printf("%c\n", *s);
    printf("%c\n", *(s + 1));
    printf("%c\n", *(s + 2));
    */
   int numbers[] = {4, 6, 8, 2, 7, 5, 0};
   // array can be treated as the address of the first element in that array
   printf("%i\n", *numbers);
   printf("%i\n", *(numbers + 1)); 
   // point arthemitc moves to the next piece of data. i.e not one byte but if it is an int move 4 second int move 8 and etc.
   printf("%i\n", *(numbers + 2));
   printf("%i\n", *(numbers + 3));
   printf("%i\n", *(numbers + 4));
   printf("%i\n", *(numbers + 5));
   printf("%i\n", *(numbers + 6));
}