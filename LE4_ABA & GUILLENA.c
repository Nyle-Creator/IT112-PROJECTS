#include <stdio.h>

int main (){

    char fullName[20] ="";
    char section[20] ="";
    float firstQuarter, secondQuarter, thirdQuarter, fourthQuarter, average;

    printf("Enter Complete Name: ");
    fgets(fullName, sizeof(fullName), stdin);

    printf("Enter Section: ");
    fgets(section, sizeof(section), stdin);

    printf("\nEnter your first Quarter Grade: ");
    scanf("%f", &firstQuarter);
    printf("Enter your second Quarter Grade: ");
    scanf("%f", &secondQuarter);
    printf("Enter your third Quarter Grade: ");
    scanf("%f", &thirdQuarter);
    printf("Enter your fourth Quarter Grade: ");
    scanf("%f", &fourthQuarter);
     
    average = (firstQuarter + secondQuarter + thirdQuarter + fourthQuarter) / 4;
    
    printf("\n***********************************");
    printf("\nStudent: %s", fullName);
    printf("Section: %s", section);
    printf("General Average: %.2f\n", average);
    
    if(average >= 90 && average <= 100){
       printf("Remarks: Outstanding\n");
    }else if(average >= 85 && average <= 89){
       printf("Remarks:Very Satisfactory\n");
    }else if(average >= 80 && average <=84) {
       printf("Remarks:Satisfactory\n");
    }else if (average >= 75 && average <= 79) {
       printf("Remarks: fair\n");
    }else {
       printf("Remarks: Failed");
    } printf("\n***********************************\n");
    
     return 0;
     
    }
    
