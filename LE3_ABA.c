#include <stdio.h>

int main (){
   
    int num1;
    int num2;
    char fullName[20]="";
    char sectionName[20]="";
    
    
    printf("Enter Your Fullname: ");
    fgets(fullName, sizeof(fullName), stdin);

    printf("Enter Section: ");
    fgets(sectionName, sizeof(sectionName), stdin);

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter Second number: ");
    scanf("%i", &num2);
    
    
    printf("\n************************************");
    printf("\n-Student Calculator-\n");
    printf("\nStudent Name: %s",fullName);
    printf("Section: %s", sectionName);
    printf("\nResults:");
    printf("\n%d+%d = %d", num1,num2,num1 + num2);
    printf("\n%d-%d = %d", num1,num2,num1 - num2);
    printf("\n%d*%d = %d", num1,num2,num1 * num2);
    printf("\n%d/%d = %d", num1,num2,num1 / num2);
    printf("\n*************************************\n");


    return 0;
}