#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    int originalNumber;
    int reverseNumber = 0;
    int lastNumber;

    printf("Please enter a number:");
    scanf("%d",&number);

    originalNumber = number;

    while(number>0){
        lastNumber = number % 10;
        reverseNumber = (reverseNumber*10) + lastNumber;
        number = number / 10;
    }

    if(originalNumber == reverseNumber){
        printf("\nThis number is a palindromic number.");
    }
    else{
        printf("\nThis number is not a palindromic number.");
    }
    return 0;
}
