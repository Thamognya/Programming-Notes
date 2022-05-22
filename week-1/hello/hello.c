#include <stdio.h>
#include <cs50.h>

int main(void) {
    string name = get_string("hello what is your name: ");
    printf("%s%s\n", "hello ", name);
    return 0;
}
