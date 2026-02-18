#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    int again=1;
    while(again == 1){

        printf("Please enter a number:");
        scanf("%d",&number);

        if(number %2 == 0){
            printf("This number (%d) is even.\n",number);
        }
        else{
            printf("This number (%d) is odd.\n",number);
        }
        printf("Do you want to check another number ?(1 for Yes,0 for No)\n");
        scanf("%d",&again);
}
    return 0;
}
