#include <stdio.h>
#include <cs50.h>

int main() {
    long i, n, j, n0, n1, n2, j0, j1;
    n0 = 0;
    j0 = 0;
    n1 = 1;
    j1 = 1;
    n = get_int("Number of fibonacci digits: ");

    for (j = 0; j < n; j++) {

        printf("%li %li", j0, j1); // prints 0 1

        for (i = 0; i < j; i++){
            n2=n0+n1; // n2 is the fibonacci output of this for loop time
            n0=n1;
            n1=n2;
            printf(" %li", n2);
        }

        printf("\n");

    }
    return 0;
}
