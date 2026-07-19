#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    int originalNumber;
    int sum = 0;

    printf("Please enter a number:");
    scanf("%d",&number);

    originalNumber = number;

    while(number > 0){
        sum += number % 10;
        number = number / 10;
    }

    if(originalNumber % sum == 0){
        printf("\nThis number is a Harshad number: %d",originalNumber);
    }
    else{
        printf("\nThis number is not a Harshad number: %d",originalNumber);
    }
    return 0;
}
