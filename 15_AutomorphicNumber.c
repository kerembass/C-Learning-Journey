#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int step(int num){
    int length = 0;
    while(num > 0){
        num = num / 10;
        length++;
    }
    return length;
}

int main()
{
    int number;
    int squareNumber;
    int originalNumber;

    printf("Please enter a number:");
    scanf("%d",&number);

    originalNumber = number;

    squareNumber = pow(number,2);

    printf("The square of the number %d is %d\n",number,squareNumber);

    int length = step(number);

    int modReceiver = pow(10,length);

    int IsSame = squareNumber % modReceiver;

    if(originalNumber == IsSame){
        printf("\n%d is a Automorphic Number.",originalNumber);
    }
    else{
        printf("\n%d is not a Automorphic Number",originalNumber);
    }
    return 0;
}
