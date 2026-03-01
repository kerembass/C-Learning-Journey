#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z; //angles


    printf("Please enter the first angle:");
    scanf("%d",&x);

    printf("Please enter the second angle:");
    scanf("%d",&y);

    printf("Please enter the third angle:");
    scanf("%d",&z);


    if(x + y + z == 180 && (x>0 && y>0 && z>0)){
        if(x<90 && y<90 && z<90){
            printf("This triangle has acute angles.\n");
        }
        else if(x == 90 || y == 90 || z == 90){
            printf("This triangle is right-angled.\n");
        }
        else if(x > 90 || y > 90 || z > 90){
            printf("This triangle is obtuse.\n");
        }
    }
    else{
        printf("Please enter valid values!\n");
    }
    return 0;
}
