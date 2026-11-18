#include <stdio.h>

int main(){
    int choice;
    float bal=0,dep=0,with=0;
    

    do{
        printf("\nSelect an option: \n\n");
        printf("1.Check Balance\n");
        printf("2.Deposit Money\n");
        printf("3.Withdraw Money\n");
        printf("4.Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        

    if(choice==1){
        printf("Your balance is $%.2f",bal);
    }
    else if(choice==2){
        printf("Enter the amount to deposit: ");
        scanf("%f",&dep);
        bal=bal+dep;
        if(dep<0){
            printf("Deposit invalid");
        }
        else{
            printf("Deposit Successfully\n");
        }
        printf("Your current balance is $%.2f", bal);
    }
    else if(choice==3){
        printf("Enter the amount to withdraw: ");
        scanf("%f",&with);
        bal=bal-with;
        if(bal<with){
            printf("You do not have enough balance");
        }
        else{
            printf("Deposit Successfully\n");
        }
        printf("\nYour current balance is $%.2f", bal);
    }
    else(choice!=4){
        printf("\nInvalid choice. Please try again.");
    }
    }while(choice!=4);

    return 0;
}
