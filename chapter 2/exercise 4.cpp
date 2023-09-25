#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>


int main(){

    // tell animals
    printf("Pick an animal that is one of these: \nHorse,Cow,Pig,Sheep,Dog,Cat,Lion,Tiger,Whale,Spider,Ant,Bee,Wasp,Termite,Octopus,Squid");

    // 4 legs?
    int leg = 0;
    printf("\nDoes your animal have 4 legs? 1 for Yes, 0 for No.\n");
    scanf("%i",&leg);

    if(leg == 1){

        // pet

        int pet = 0;
        printf("\nIs your animal commonly a pet? 1 for Yes, 0 for No.\n");
        scanf("%i",&pet);

        if(pet == 0){

            //eaten?
            int food = 0;
            printf("\nIs your animal commonly eaten / killed for meat? 1 for Yes, 2 for No.\n");
            scanf("%i",&food);

            if(food == 1){
                //wool
                int wool = 0;
                printf("\nDoes your animal get shaven for wool? 1 for Yes, 0 for No.\n");
                scanf("%i",&wool);

                if(wool == 1){
                    printf("Your animal is a Sheep.");
                }

                if(wool == 0){
                    //milk
                    int milk = 0;
                    printf("\nDoes your animal produce milk that is farmed en masse and consumed by humans? 1 for yes, 2 for No.\n");
                    scanf("%i",&milk);
                    if(milk == 1){
                        printf("Your animal is a Cow.");
                    }
                    else{
                        printf("Your animal is a Pig.");
                    }
                }
            }

            if(food == 0){

                int iscat = 0;
                printf("\nIs your animal a feline? 1 for Yes, 0 for No.\n");
                scanf("%i",&iscat);

                if(iscat == 1){

                    //mane
                    int mane = 0;
                    printf("\nDo the males of your animal have a mane? 1 for Yes, 0 for No.\n");
                    scanf("%i",&mane);

                    if(mane == 1){
                        printf("Your animal is a lion.");
                    }

                    else{
                        printf("Your animal is a Tiger.");
                    }
                }


                if(iscat == 0){
                    printf("Your animal is a Horse.");
                }

            }


        }


        if(pet == 1){

            int lives = 0;
            printf("\nIs your animal often described as having 'Nine lives'? 1 for Yes, 0 for No.\n");
            scanf("%i",&lives);
            if(lives == 0){
                printf("Your animal is a Dog.");
            }
            else{
                printf("Your animal is a Cat.");
            }
        }


    }

    //branch 1
    if(leg == 0){

        // sea creature?
        int sea = 0;
        printf("\nIs your animal a sea creature? 1 for Yes, 0 for No\n");
        scanf("%i",&sea);

        if(sea == 1){

            //sealegs
            int clegs = 0;
            printf("\nDoes your animal have 2 or less legs? 1 for Yes, 2 for No.\n");
            scanf("%i",&clegs);

            if(clegs == 1){
                // blowhole
                int blow = 0;
                printf("\nDoes your animal have a blowhole? 1 for Yes, 2 for No.\n");
                scanf("%i",&blow);

                if(blow == 1){
                    //size
                    int size = 0;
                    printf("Can some species of your animal get up to 25m long? 1 for Yes, 2 for No.");
                    scanf("%i",&size);
                    if(size == 0){
                        printf("Your animal is a dolphin.");
                    }
                    else{
                        printf("Your animal is a whale.");
                    }
                }

                if(blow == 0){
                    //sealegs2
                    int clegs2 = 0;
                    printf("Does your animal have exactly 2 legs? 1 for Yes, 2 for No.");
                    scanf("%i",&clegs2);

                    if(clegs2 == 0){
                        printf("Your animal is a seal.");
                    }
                    else{
                        printf("Your animal is a penguin.");
                    }
                }
            }

            if(clegs == 0){
                //ink
                int ink = 0;
                printf("Does your animal expell ink as a defense mechanism? 1 for Yes, 2 for No.\n");
                scanf("%i",&ink);
                if(ink == 1){
                    printf("your animal is a squid.");
                }
                else{
                    printf("Your animal is an octopus.");
                }
            }
        }

        if(sea == 0){

            //branch 1,1

            // 6<legs

            int legs2 = 0;
            printf("\nDoes your animal have less than 6 legs? 1 for Yes, 0 for No.\n");
            scanf(" %i", &legs2);


            if(legs2 == 1){
                //big?
                int big = 0;
                printf("\nIs your animal big? 1 for Yes, 0 for No.\n");
                scanf("%i",&big);
                if(big == 0){
                    printf("Your animal is a sparrow.");

                }

                else{
                    printf("Your animal is an ostrich.");
                }
            }




            if(legs2 == 0){

                //sting?
                int sting = 0;
                printf("\nDoes your animal sting? 1 for Yes, 0 for No.\n");
                scanf("%i",&sting);

                if(sting == 1){
                    int death = 0;
                    printf("\nDoes your animal die upon stinging? 1 for Yes, 0 for No.\n");
                    scanf("%i",&death);
                    if(death == 0){
                        printf("Your animal is a bee.");
                    }
                    else{
                        printf("Your animal is a wasp.");
                    }
                }


                if(sting == 0){
                    // exact 6 legs
                    int legs3 = 0;
                    printf("\nDoes your animal have exactly 6 legs? 1 for Yes, 2 for No.\n");
                    scanf("%i",&legs3);
                    if(legs3 == 1){
                        int wood = 0;
                        printf("\nDoes your animal eat wood? 1 for Yes, 2 for No.\n");
                        scanf("%i",&wood);
                        if(wood == 0){
                            printf("Your animal is an ant.");

                        }
                        else{
                            printf("Your animal is a termite.");
                        }
                    }

                    if(legs3 == 0){
                        printf("your animal is a spider.");
                    }
                }

            }


        }


    }

}