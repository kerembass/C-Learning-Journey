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

        int digit = number % 10;
        int fact = 1;


        for(int i=1;i<=digit;i++){
            fact = fact * i;
        }

        sum += fact;
        number = number / 10;
    }
    if(sum == originalNumber && originalNumber != 0){
        printf("%d is a strong number.",originalNumber);
    }
    else{
        printf("%d is not a strong number.",originalNumber);
    }

    return 0;
}
