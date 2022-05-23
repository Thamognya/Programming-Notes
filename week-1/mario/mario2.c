#include <stdio.h>
#include <cs50.h>

int main(void) {
    int i, n, j;
    // check if value is less than 1, if so then break else continue
    do {
        n = get_int("Size: ");
    } while (n < 1);
    // for each row
    for (i = 0; i < n; i++) {
        // for each column
        for (j = 0; j < n; j++) {
            // print the brick fam
            printf("%s", "#");
        }
        // move to next line
        printf("\n");
    }
    return 0;
}
