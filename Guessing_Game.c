#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    srand(time(NULL));
    int random, guess, count=0;
    random = (rand()%100)+1;
    do{
        count++;
        printf("Enter your guess(1-100): ");
        scanf("%d", &guess);
        if(guess>random){
            printf("Guess Lower!!\n");
        }
        else if(guess<random){
            printf("Guess Higher\n");
        }
        else{
            printf("Congratulations on guessing the correct number in %d tries\n", count);
        }
    }while(guess!=random);
    printf("Thanks for playing the game!!\n");
    printf("Developed By: Aatmik\n");    
    return 0;
}