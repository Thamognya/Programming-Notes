#include <stdio.h>
#include <cs50.h>
#include <string.h>

typedef struct
{
    string name;
    string number;
}
person;

int main(void)
{
    // bad code as you are trusting that the the names and numbers are strictly held to each other. Not tight system.
    // lets make out own data type
    /*
    string names[] = {"Carter", "David"};
    string numbers[] = {"+1-234-541-1323", "+1-234-541-1324"};
    for (int i = 0; i < 2; i++)
    {
        if (strcmp(names[i], "David") == 0)
        {
            printf("Found %s\n", numbers[i]);
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
    */
   person people[2];
   people[0].name = "Carter";
   people[0].number = "+1-234-541-1323";
   people[1].name = "David";
   people[1].number = "+1-234-541-1324";
   for (int i = 0; i < 2; i++)
   {
       if (strcmp(people[i].name, "David") == 0)
       {
           printf("Found %s\n", people[i].number);
           return 0;
       }
   }
   printf("Not Found\n");
}