#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int main(){
    srand(time(NULL));
    int guess = 1;
    int num = 0;
    int credits = 10;
    int mult = 1;
    int start = 0;
    int bet = 0;
    int valid = 1;
    while(guess != num){
        printf("You have %i credits, would you like to play? Y/N\n",credits);
        scanf("%c",&start);
        if(start=='y'){
            mult = 1;
            valid = 1;
            num = rand()%30;
            while(valid == 1){
                printf("How much would you like to bet?\n");
                scanf("%i",&bet);
                valid = 0;
                if(bet>credits or bet < 0){
                    printf("invalid bet!");
                    valid = 1;
                }

            }
            printf("Guess a number between 1-30!\n");
            scanf("%i",&guess);
            if(guess==num){
                int temporary = 0;
                printf("Correct!");
                temporary = num%10;
                if(temporary == 0){
                    mult = mult*3;
                }
            }
        }
    }
}