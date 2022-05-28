#include <stdio.h>
#include <cs50.h>
#include <string.h>

int string_length(string s);

int main(void)
{
    string name = get_string("What is your name? ");
    int length_of_string = strlen(name);
    printf("%s = %i characters long.\n", name, length_of_string);
}