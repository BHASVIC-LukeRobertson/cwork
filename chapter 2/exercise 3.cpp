#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
int main()
{
    // assign variables
    float num1 = 0;
    float num2 = 0;
    char op = 'p';
    float result = 0;

    // get input for num1/2
    printf("Input num1:\n");
    scanf("%f",&num1);
    printf("Input num2:\n");
    scanf("%f",&num2);

    // get input for operator
    printf("Input operator (+,-,*,/)\n");
    scanf(" %c",&op);

    //use switch to choose op
    switch(op){
        case '/':
            result = num1/num2;
            break;
        case '*':
            result = num1*num2;
            break;
        case '-':
            result = num1-num2;
            break;
        case '+':
            result = num1+num2;
            break;
    }
    printf("Result of your calculation is: %f\n",result);
    return(0);
}

