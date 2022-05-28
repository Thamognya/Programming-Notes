# Week 2

We were using make, a tool that automatically acessess the compiler for us

there are several c compilers such as clang, and gcc

## command to run

```shell
gcc file.c -o file -lcs50 -lm
```

## Compiling 

Usually you would use gcc or clang, but for simplcity sakes we will be using make (which automates it for us).

Everytime your run a program using make, there are 4 things that occur

- preprocessing

If you rember the 

```c
#include <stdio.h>
#include <cs50.h>
```

these are called preprocessor directives, Handled special from the rest of your code; the prototype of get_string is in cs50.h

THe compiler goes and finds out the prototype for you during this stage.

During this stage, the compiler finds the cs50.h file and basically copy pastes it on to the very top.

find and replace.

- compiling

after the preproccessing stage it looks like this

```c
//...
string get_string(string prompt);
int printf(string format, ...);
//...

int main() {
    string name = get_string("What is your name: ");
    printf("%s%s\n", "Hello, ", name);
    return 0;
}
```

Now it is time to compile (not the umbrella term), and now change it into asm

- assembling

Turns asm to 0's to 1's

- linking

linking all the all the 0's and 1's of the 3 file's code (stdio.c, hello.c, and cs50.c)

----

You can all of this compiling


## Debuging

Use debug50 https://youtu.be/v_luodP_mfE?t=1870

## Arrays

```c
int scores[3];
// this is an array
```
look at [score-array](./scores/score-array.c)

## Nul charecter

represented as \0 . it contains 8 bits of 0

H | I | ! | \0

so a word like HI!, does not use 3 bytes but 4 bytes (the extra due to the nul charecter)

