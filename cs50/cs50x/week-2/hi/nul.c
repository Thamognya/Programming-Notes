#include <stdio.h>
#include <cs50.h>

int main()
{
    string s = "HI!";
    string t = "BYE!";
    // this is dangerous, we are looking memeory locations past our string
    printf("%i %i %i %i\n", s[0], s[1], s[2], s[3]);
    printf("%i %i %i %i %i\n", t[0], t[1], t[2], t[3], t[4]);
    return 0;
}