#include <stdio.h>

int main() {

    int Num;
    int Sum = 0;

    while (1) {
        printf("Enter a number: ");
        scanf("%d", &Num);

        if (Num <= 0) {
            break;
        }

        Sum = Sum+Num;
    }

    printf("\nThe total sum of positive numbers is: %d", Sum);

    return 0;
}


    
