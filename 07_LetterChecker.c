#include <stdio.h>
#include <stdlib.h>


int main()
{
    char letter;

    printf("Please enter a character:");
    scanf("%c",&letter);

    if(letter >= 'A' && letter <='Z'){
        printf("The letter you entered is uppercase");
    }
    else if(letter >= 'a' && letter <= 'z'){
        printf("The letter you entered is lowercase");
    }
    else{
        printf("This is not a letter.\n");
    }
    return 0;
}
