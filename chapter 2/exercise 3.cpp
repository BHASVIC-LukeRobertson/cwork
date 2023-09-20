#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
    // assign variables
    float num1 = 0;
    float num2 = 0;
    char op = 'p';
    float result = 0;

    // get input for num1/2
    printf("Input 2 numbers in the format (num1,num2): \n");
    scanf("%f,%f",&num1,&num2);

    // check inputs
    int num11 = 0;
    int num22 = 0;
    num11 = int(num1);
    num22 = int(num2);
    int check1 = isdigit(num11);
    int check2 = isdigit(num22);
    if(check1 != 0 or check2 != 0){
        printf("Invalid input.");
        return 0;
    }

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
    printf("%s",check1);
    printf("%s",check2);
    return(0);
}

