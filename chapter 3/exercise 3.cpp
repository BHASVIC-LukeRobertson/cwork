#include<stdio.h>
#include<stdlib.h>
int main(){
    int num = 0;
    int check = 0;
    while(num != 100) {
        num = 0;
        int calc1 = 0;
        int calc2 = 0;
        printf("\n\nInput potentially magic number:\n");
        scanf("%i", &num);

        if (num > 100) {
            printf("\ninvalid input\n");
        }

        calc1 = num / 7 * 5;
        calc2 = num / 3 * 5;
        if (calc1 < 100 or calc2 < 100) {
            printf("Magic number!");
        } else {
            printf("Not magic number.");
        }
        printf("Divided by 3: %i\nDivided by 7: %i", calc2, calc1);
    }
}
