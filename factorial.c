#include <stdio.h>
#include <string.h>

int main() {
    int number;
    int fact=1; 

    printf("Enter the number: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Factorial doesn\'nt count for negative integers.");
        return 1;
    }
    
    for (int i=1; i<=number; i++) {
        fact *= i;
    }

    printf("this is your factorial of %d: %d", number, fact);

    return 0;
}