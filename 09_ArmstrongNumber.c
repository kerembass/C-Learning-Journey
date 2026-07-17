#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    printf("-----N-Digit Armstrong Controller -----\n\n");

    int number;
    int originalNumber,originalNumber2;
    int digitNumber = 0;
    int provNumber = 0;

    printf("Please enter a number:");
    scanf("%d",&number);

    originalNumber = number;
    originalNumber2 = number;

    while(originalNumber>0){

        originalNumber = originalNumber / 10;

        digitNumber++;
    }
    while(originalNumber2>0){

        int digit = originalNumber2 % 10;

        provNumber += pow(digit,digitNumber);

        originalNumber2 = originalNumber2 / 10;
    }

    if(number == provNumber){
        printf("\nThis is an Armstrong Number!\n");
    }
    else{
        printf("\nThis is not an Armstrong Number!\n");
    }

    printf("\n");
    return 0;
}
