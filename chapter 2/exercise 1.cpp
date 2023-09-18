#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()

{
    srand(time(NULL)); // initialise random num generator


    int num1 = rand() % 10+1; // randomise NUM1

    int ges = 0; // declare guess variable

    printf("\n Guess a number between 1 and 10: \n");

    scanf("%i",&ges); // get guess input

    if (ges == num1){
        printf("Correct");
    }

    else{
        if (ges == num1+1 or ges == num1-1){
            printf("Close!");
        }
        else{
            printf("Wrong.");
        }
    }
    return 0;
}