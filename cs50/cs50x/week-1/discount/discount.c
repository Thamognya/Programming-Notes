#include <stdio.h>
#include <cs50.h>

float discount(float i, float n);

int main(void) {
    float i, n, j;
    n = get_float("Percentage of Discount: ");
    n = n / 100;
    i = get_float("Price Before Sale: ");
    j = discount(i, n);
    printf("Price After Sale: %.2f\n", j);
}

float discount(float i, float n) {
    j = i * (1 - n);
    return j;
}
