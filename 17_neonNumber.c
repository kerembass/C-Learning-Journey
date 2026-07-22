#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    int squareNumber;
    int sumDigit = 0;

    printf("Please enter a number:");
    scanf("%d",&number);

    squareNumber = number * number;
    printf("\nThe square of %d is %d.\n", number, squareNumber);

    while(squareNumber > 0){
        sumDigit += squareNumber % 10;
        squareNumber = squareNumber / 10;
    }
    if(sumDigit == number){
        printf("\n%d is a neon number.\n",number);
    }
    else{
        printf("\n%d is not a neon number.\n",number);
    }
    return 0;
}
