#include<stdlib.h>
#include<stdio.h>

int main(){
    int type = 0;
    printf("1 for individual value, 2 for range:\n");
    scanf("%i",&type);

    if(type == 2){
        int arr[100]={0};
        int num1 = 0;
        int num2 = 0;
        int num3 = 0;
        int num4 = 0;
        int num5 = 0;
        int remainder = 0;
        int result = 0;
        printf("Input num1 (lower end of range):\n");
        scanf("%i", &num1);
        printf("Input num2 (higher end of range):\n");
        scanf("%i", &num2);
        num4=num2-num1;
        do {
            do {
                remainder = num5 % 10;
                num5 = num5 / 10;
                result = remainder * remainder * remainder + result;
                if(result = num5){
                    arr[num3] = num5;
                    num3 = num3+1;
                }
            } while (num5 > 1);
            num5 = num1+num4;
            printf("\nResult for %i, is %i.\n", num5, result);
            num4 = num4-1;
            printf("");

        }
        while(num4>-1);
    }

    if(type == 1){
        int num, remainder, result = 0;
        printf("Input number:\n");
        scanf("%i", &num);

        do {
            remainder = num % 10;
            num = num / 10;
            result = remainder * remainder * remainder + result;
        } while (num > 1);
        printf("%i", result);
    }
}