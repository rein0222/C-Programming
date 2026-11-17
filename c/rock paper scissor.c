#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int user();
int enemy();
void outcome(int you, int computer);
int main(){
    printf("***ROCK PAPER SCISSOR***\n");
    int you=user();
    int computer=enemy();
    switch(you){
        case 1:
        printf("YOU CHOSE ROCK\n");
        break;
        case 2:
        printf("YOU CHOSE PAPER\n");
        break;
        case 3:
        printf("YOU CHOSE SCISSOR\n");
        break;
    }
    switch(computer){
        case 1:
        printf("COMPUTER CHOSE ROCK\n");
        break;
        case 2:
        printf("COMPUTER CHOSE PAPER\n");
        break;
        case 3:
        printf("COMPUTER CHOSE SCISSOR\n");
        break;
    }

    outcome(you,computer);
    
    return 0;
}
int user(){
    int choice;
    printf("Choose an option:\n");
    do{
        printf("1.ROCK\n");
        printf("2.PAPER\n");
        printf("3.SCISSOR\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
    }while(choice<1||choice>3);
    return choice;

}
int enemy(){
    return (rand()%3)+1;
}
void outcome(int you,int computer){
    if(you==computer){
        printf("IT'S A TIE");
    }
        else if((you==1&&computer==3)||
            (you==2&&computer==1)||
            (you==3&&computer==2)){
            printf("YOU WON");
    }
        else{
            printf("YOU LOST");
    }
}

