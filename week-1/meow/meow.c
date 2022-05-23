#include <stdio.h>
#include <cs50.h>

// in cs50 library there is a file known as cs50.c where the functions such as get_int are written and cs50.h (it contains breadcrumbs of these prototypes) where the prototypes are written and so when you use it the compiler knows where to look.
// similar for stdio library.

void meow(int n); // declaring function or known as prototype -> return value _name_(_data_typ_-_argument_);

int main(void) {
    int n;
    n = get_int("Number: ");
    meow(n);
}

void meow(int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("%s\n", "meow");
    }
}
