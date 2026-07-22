#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    int originalNumber;
    int sumDigit = 0;
    int productDigit = 1;

    printf("Please enter a number:");
    scanf("%d",&number);

    originalNumber = number;

    while(number > 0){
        int digit = number % 10;
        sumDigit += digit;
        productDigit *= digit;
        number = number / 10;
    }
    if(sumDigit == productDigit){
        printf("%d is a spy number.",originalNumber);
    }
    else{
        printf("%d is not a spy number.",originalNumber);
    }

    return 0;
}
