#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    int sum = 0;
    printf("Please enter a number:");
    scanf("%d",&number);

    for(int i=1;i<number;i++){
        if(number % i == 0){
            sum +=i;
        }
    }

    if(number == sum){
        printf("This is a perfect number: %d",number);
    }
    else{
        printf("This is not a perfect number: %d",number);
    }
    return 0;
}
