#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int guess,tries=0,min=1,max=100;
    int answer=(rand()%(max-min+1))+min;

    printf("Welcome to the Guessing Game!\n");
    do{
    printf("Guess a number between %d - %d: ",min,max);
    scanf("%d", &guess);
    tries=tries+1;

    if(guess<answer){
        printf("TOO LOW\n");
    }
    else if(guess>answer){
        printf("TOO HIGH\n");
    }
    else{
        printf("CORRECT\n");
    }

    }while(guess!=answer);

    printf("The answer is %d\n", answer);
    printf("The number of tries is %d", tries);

    return 0;
}

