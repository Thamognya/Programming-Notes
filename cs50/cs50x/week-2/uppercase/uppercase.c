#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <cs50.h>

int main(void)
{
    string s = get_string("Before: ");
    printf("%s", "After:  ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        /*
        if (islower(s[i]))
        {
            printf("%c", toupper(s[i]));
        }
        else
        {
            printf("%c", s[i]);
        }
        */
       // just toupper(s[i]) just does what this above lien of code does
        printf("%c", toupper(s[i]));
    }
    printf("\n");
}