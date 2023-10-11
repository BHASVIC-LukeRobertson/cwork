#include<stdio.h>
#include<stdlib.h>

int main(){
    int y = 0;
    int x = 10;
    int temp = 0;
    while(x>-1){
        for(temp = x;temp > 0;temp--) {
            printf("x");
        }
        for(temp = y;temp>0;temp--) {
            printf("y");
        }
    x--;
    y++;
    printf("\n");
    }
}