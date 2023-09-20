#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
    // assign variable
    char day = 'o';

    printf("Enter W for weekday, S for Saturday or Sunday or B for bank holiday.");

    // day = user input
    scanf("%s",&day);

    // turn input lowercase

    day = tolower(day);

    // ----------------------

    // get amount of child tickets
    int numctick = 0;
    printf("How many child tickets do you need?\n");
    scanf("%i",&numctick);

    // get amount of adult tickets
    int numatick = 0;
    printf("How many adults?\n");
    scanf("%i",&numatick);

    // ----------------------

    // assign variables
    float total = 0;
    int numppl = 0;
    int discount = 0;

    // get total people going
    numppl = numatick+numctick;

    // check for discount
    if (numppl >= 8){
        printf("Discount valid!\n");
        discount = 1;
    }

    //weekday
    if(day == 'w'){
        total = numctick*5+numatick*8;
        if(discount == 1){
            total= total*0.9;
        }
    }

    //weekend
    if(day == 's'){
        total = numctick*7.5+numatick*12;
        if(discount == 1){
            total= total*0.9;
        }
    }

    //bank holiday
    if(day == 'b'){
        total = numctick*7.5+numatick*14;
        if(discount == 1){
            total= total*0.9;
        }
    }

    printf("Total cost is %f",total);




};
