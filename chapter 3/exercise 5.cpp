#include<stdlib.h>
#include<stdio.h>

int main(){

    // initialise and get value for times table

    int tables = 0;
    printf("Input your chosen times table:\n");
    scanf("%i",&tables);

    // initialise and get value for depth of times table

    int amnt = 0;
    printf("Input amount how far into the times table you want to see:\n");
    scanf("%i",&amnt);

    // start for loop

    int x = 0;

    for(x=1;x<amnt;x++){
        int temp = tables*x;
        printf("\n%i x %i = %i\n",tables,x,temp);
    }


}
