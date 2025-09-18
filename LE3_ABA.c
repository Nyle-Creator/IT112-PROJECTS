#include <stdio.h>

int main (){
   
    int num1;
    int num2;
    char fullName[20]="";
    char sectionName[20]="";
  

    printf("Enter Complete Name: ");
    fgets(fullName, sizeof(fullName), stdin);

    printf("Enter Section: ");
    fgets(sectionName, sizeof(sectionName), stdin);

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%i", &num2);   
    
    printf("\n************************************");
    printf("\n-Student Calculator-\n");
    printf("\nStudent Name: %s",fullName);
    printf("Section: %s", sectionName);
    printf("\nResults:");
    printf("\n%d+%d = %d", num1,num2,num1 + num2);
    printf("\n%d-%d = %d", num1,num2,num1 - num2);
    printf("\n%d*%d = %d", num1,num2,num1 * num2);
     if(num2 != 0){
     printf("\n%d/%d = %.2f", num1,num2,(float)num1 / num2);
     }
     else{
     printf("Cannot divide by zero");
     }
     printf("\n*************************************");
    return 0;
}