#include<stdio.h>
#include<stdlib.h>

int main(){
    // assign variables
    int num_of_num = 0;
    int totalnum = 0;
    int temp = 0;
    int count = 0;
    float average = 0;

    printf("How many numbers do you want?\n");
    scanf("%i",&num_of_num);

    do {
        printf("enter number:");
        scanf("%i", &temp);
        totalnum = totalnum+temp;
        count = count+1;
    }while(count != num_of_num);

    average = float(totalnum/num_of_num);
    printf("The average of your numbers is:\n %f",average);
    return 0;


}