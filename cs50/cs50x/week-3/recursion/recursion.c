#include <stdio.h>
#include <cs50.h>

void draw(int n);

int main(void)
{
    int height = get_int("Height: ");
    draw(height);
}

// this is called recursion
void draw(int n)
{
    // this base case prevents infinte recursion
    if (n <= 0)
    {
        return;
    }
    /*
    or
    if (n > 0)
    {
        draw(n - 1);
    }
    */
    // if you want me to draw pyramid of height n
    // I  being great shall say 
    draw(n - 1);
    // print the bottom row of the pyramid as mentioned
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
}