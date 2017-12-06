//
//  main.c
//  ATM v.0.1
//
//  Created by Eun Jae Lee on 6/12/17.
//  Copyright © 2017 Eun Jae Lee. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    int menu;
    int temPin;
    
    int pin = 1234;
    int balance = 1000;
    
    int withdraw;
    int deposit;
    
start:
    printf("Enter your 4 digit PIN:\n");
    scanf("%d",&temPin);
    
    if (temPin != pin) {
        printf("Wrong PIN try again.\n");
        goto start;
        
    } else {
        
        printf("Welcome!\n");
        printf("Please select following menu:\n\n");
        
        printf("---------------------\n");
        printf("Press 1 for Withdraw\n");
        printf("Press 2 for Balance\n");
        printf("Press 3 for Deposit\n");
        printf("Press 4 to exit\n");
        printf("---------------------\n\n");
    }
    
start2:
    scanf("%d",&menu);
    
    if (menu == 1) {// cash out
        printf("Enter amount:\n");
        scanf("%d",&withdraw);
        balance = balance - withdraw;
    
        if (withdraw<balance) {
            
             printf("$%d is ready... Your current balance is $%d\n\n",withdraw,balance);
            
        } else  {
            
            printf("Invalid Funds... Your current balance is $%d\n",balance);
            printf("Try again\n");
            
            printf("Press 1 for windraw\n");
            
            goto start2;
            
        }
        
        printf("---------------------\n");
        printf("Press 1 for Withdraw again\n");
        printf("Press 2 for Balance\n");
        printf("Press 3 for Deposit\n");
        printf("Press 4 to exit\n");
        printf("---------------------\n\n");
        
        goto start2;
        
        
    } else if (menu ==2) { // balance check
        
        printf("Your current balance is $%d\n\n",balance);
        if (balance>1000000) {
            printf("You're a Millionaire\n\n");
        }
        
        printf("---------------------\n");
        printf("Press 1 for Withdraw\n");
        printf("Press 2 for Balance\n");
        printf("Press 3 for Deposit\n");
        printf("Press 4 to exit\n");
        printf("---------------------\n\n");
        
        goto start2;
    
    }
    else if (menu == 3) {// make deposit
        printf("Please enter your deposit amount:\n");
        scanf("%d",&deposit);
        
        balance = balance + deposit;
        printf("Thank you for your deposit...\n\n");
        printf("Your current balance is $%d\n\n",balance);
        
        if (balance>1000000) {
            printf("You're a Millionaire\n\n");
        }
        
        printf("---------------------\n");
        printf("Press 1 for Withdraw\n");
        printf("Press 2 for Balance\n");
        printf("Press 3 for Deposit\n");
        printf("Press 4 to exit\n");
        printf("---------------------\n\n");
        
        goto start2;
    }
    
    else if (menu == 4){// exit
        return 0;
    }
    
    else {
        printf("---------------------\n");
        printf("Press 1 for Withdraw\n");
        printf("Press 2 for Balance\n");
        printf("Press 3 for Deposit\n");
        printf("Press 4 to exit\n");
        printf("---------------------\n\n");
        
        goto start2;
    }
    
   // return 0;
}
