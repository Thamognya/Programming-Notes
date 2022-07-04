#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
    char *s = get_string("s: "); // returns the first address of first char
    char *t = malloc(strlen(s) + 1); // allocate memory for t
    // maybe malloc failes
    if (t == NULL)
    {
        printf("malloc failed\n");
        return 1;
    }
    /*
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        t[i] = s[i];
    }
    */
    strcpy(t, s);
    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }
    printf("S: %s\n", s);
    printf("t: %s\n", t);
    free(t);
    return 0;
}