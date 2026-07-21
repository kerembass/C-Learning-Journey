#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int stepCounter(int num)
{
    int length = 0;
    while(num > 0){
        num = num/10;
        length++;
    }
return length;
}

int main()
{
    int number;
    int originalNumber;
    int tempNumber;
    int sum = 0;

    printf("Please enter a number:");
    scanf("%d",&number);

    originalNumber = number;

    int length = stepCounter(number);


    while(number > 0){
        int digit = number % 10;
        sum += pow(digit,length);
        number = number / 10;
        length--;
    }

    if(sum == originalNumber){
        printf("%d is a Disarium number.",originalNumber);
    }
    else{
        printf("%d is not a Disarium number.",originalNumber);
    }

    return 0;
}
