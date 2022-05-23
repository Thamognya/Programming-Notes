#include <stdio.h>
#include <cs50.h>

int main() {
    int i, j, n;
    n = get_int("Number: ");

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j < i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
