#include <stdio.h>
#include <cs50.h>

int main()
{
    int score1 = get_int("Score 1: ");
    int score2 = get_int("Score 2: ");
    int score3 = get_int("Score 3: ");
    printf("%f\n", (score1 + score2 + score3)/3.0);
    return 0;
}