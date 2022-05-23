#include <stdio.h>
#include <cs50.h>

int main(void) {
    int i, n;
    do {
        n = get_int("Width: ");
    } while (n < 1);
    for (i = 0; i < n; i++) {
        printf("%s","?");
    }
    printf("\n");
    return 0;
}
