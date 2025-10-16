#include <stdio.h>

int main (){
    int choice; 
    float balance = 500;
    float amount;
    float result;
    

    do {
        printf("\n\n************BSIT-IT1R6 BANK***************\n");
        printf("Please Select your Transaction\n");
        printf("1.Balance Inquiry\n");
        printf("2.Deposit\n");
        printf("3.Withdraw\n");
        printf("4.Exit\n");
        scanf("%d", &choice);

        
        switch (choice)
        {
        case 1: 
            printf("\nYour Current Balance is: %.2f\n", balance);
        break;
        
        case 2:
            printf("\nEnter amount to deposit: ");
            scanf("%f", &amount);
            balance += amount;
            printf("P%.2f has been deposited to your account successfully!\n", amount);
        break;

        case 3:
        printf("Enter amount to withdraw: ");
        scanf("%f", &amount);
        result = balance - amount;
        if (result < 100) {
        printf("Withdrawal denied! You must at least have ₱100 in your account.\n");
        }else {
        balance = result;
        printf("You withdraw ₱%.2f successfully!\n", amount);
    }
         break;
         case 4:
             printf("\nThank you for using BSIT-IT1R6 Bank!");
             break;

         default:
            printf("\nInvalid choice! Please select a valid option (1-4).\n");
     
    }
    } while(choice !=4);
        
   

    return 0;
}