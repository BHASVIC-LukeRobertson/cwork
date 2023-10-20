#include<stdlib.h>
#include<stdio.h>

int main(){

    // create board

    char board[3][3] = {'_','_','_','_','_','_','_','_','_'};
    int i;
    int h;
    for (i=0;i < 3;i++){
        printf("%i  ",i+1);
        for(h=0;h<3;h++){
            printf("%c  ",board[i][h]);
            if(h==2){
                printf("\n");
            }
        }
    }
    printf("   1  2  3");

    // start game

    int won = 0;
    int x = 0;
    int y = 0;
    int norc = 0;



    while(won == 0){

        if(norc == 0){

            printf("\n\nNoughts, select x coordinate (1,2,3)\n");
            scanf("%i", &x);

            printf("Select y coordinate(1,2,3)\n");
            scanf("%i", &y);

            printf("chosen coordinate is: [%i][%i]\n", x, y);

            if(x > 0 and x < 4 and y > 0 and y < 4){

                if(board[y-1][x-1] != '_'){
                    printf("\nInvalid, please pick another square.\n");
                    norc = 1;
                }

                if(board[y-1][x-1] == '_'){
                    board[y-1][x-1] = '0';
                    norc = 0;
                }

                //print new board

                for (i=0;i < 3;i++){
                    printf("%i  ",i+1);
                    for(h=0;h<3;h++){
                        printf("%c  ",board[i][h]);
                        if(h==2){
                            printf("\n");

                        }
                    }
                }
                printf("   1  2  3");
                printf("\nHas someone won? 1 for yes, 0 for no.\n");
                scanf("%i",&won);
            }
        }


        if(norc == 0){

            printf("\n\nCrosses, select x coordinate (1,2,3)\n");
            scanf("%i", &x);

            printf("Select y coordinate(1,2,3)\n");
            scanf("%i", &y);

            printf("chosen coordinate is: [%i][%i]\n", x, y);

            if(x > 0 and x < 4 and y > 0 and y < 4){

                if(board[y-1][x-1] != '_'){
                    printf("\nInvalid, please pick another square.\n");
                    norc = 0;
                }

                if(board[y-1][x-1] == '_'){
                    board[y-1][x-1] = 'x';
                    norc = 1;
                }

                //print new board

                for (i=0;i < 3;i++){
                    printf("%i  ",i+1);
                    for(h=0;h<3;h++){
                        printf("%c  ",board[i][h]);
                        if(h==2){
                            printf("\n");
                        }
                    }
                }
                printf("   1  2  3");
                printf("\nHas someone won? 1 for yes, 0 for no.\n");
                scanf("%i",&won);
            }
        }
    }
}