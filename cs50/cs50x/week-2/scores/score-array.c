#include <stdio.h>
#include <cs50.h>

int main()
{
    // get number of scores required for average
    int num_of_scores;
    do
    {
        num_of_scores = get_int("Number of scores: ");
    }
    while (num_of_scores < 1);
    // Declare and initialize variables (the first oen is an array), the sum is for the average calculation
    int scores[num_of_scores];
    // assign/get values to each part of array
    /* this is a bad way
    scores[0] = get_int("Score 1: ");
    scores[1] = get_int("Score 2: ");
    scores[2] = get_int("Score 3: ");
    */
    // use for average
    int sum = 0;
    // use for loop
    for (int i = 0; i < num_of_scores; i++)
    {
        scores[i] = get_int("Score %i: ", (i + 1));
        sum += scores[i];
    }
    // calculate average
    float average = sum / num_of_scores;
    // print average
    printf("%f\n", average);
    // return 0
    return 0;
}