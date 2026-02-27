#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*A program that identifies the largest and smallest of three numbers
    entered by the user using conditional statements */

    int number1,number2,number3,maxNumber,minNumber;

    printf("Please enter the first number:");
    scanf("%d",&number1);

    printf("Please enter the second number:");
    scanf("%d",&number2);

    printf("Please enter the third number:");
    scanf("%d",&number3);


    //Part of max
    if(number1>number2 && number1>number3){
        maxNumber = number1;
    }
    else if(number2>number1 && number2>number3){
        maxNumber = number2;
    }
    else if(number3>number1 && number3>number2){
        maxNumber = number3;
    }

    //Part of min
    if(number1<number2 && number1<number3){
        minNumber=number1;
    }
    else if(number2<number3 && number2<number1){
        minNumber=number2;
    }
    else if(number3<number2 && number3<number1){
        minNumber=number3;
    }


    printf("Max Number: %d\n",maxNumber);
    printf("Min Number: %d",minNumber);

    return 0;
}
