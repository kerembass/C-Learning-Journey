#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int sum=0;
    printf("Please enter a 4-digit number:");
    scanf("%d",&num);
    if(num > 999 && num<10000){
        for(int i=0;i<4;i++){
            sum += (num % 10);
            num = num / 10;
        }
        printf("the sum of the digits of your number: %d",sum);
    }
    else{
        printf("Please enter a valid number!");
    }
    return 0;
}
