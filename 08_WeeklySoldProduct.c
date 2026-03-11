#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*

    Monday = 2
    Tuesday= 5
    Wednesday = 7
    Thursday = 10
    Friday = 15
    Saturday = 19
    Sunday = 25

    At the end of the day, we will calculate the total products
    sold using the switch-case logic.

    */
    int numberOfProducts = 0;
    int day = 0;
    char *dayName;


    printf("----------DAYS-------------\n\n");
    printf("Monday = 1\n");
    printf("Tuesday = 2\n");
    printf("Wednesday = 3\n");
    printf("Thursday = 4\n");
    printf("Friday = 5\n");
    printf("Saturday = 6\n");
    printf("Sunday = 7\n\n");

    printf("Please select one of days above: ");
    scanf("%d",&day);
    printf("\n\n");


    switch(day){
        case 1: numberOfProducts += 2;
                dayName ="Monday";
                break;

        case 2: numberOfProducts += (2+5);
                dayName = "Tuesday";
                break;

        case 3: numberOfProducts += (2+5+7);
                dayName = "Wednesday";
                break;

        case 4: numberOfProducts += (2+5+7+10);
                dayName = "Thursday";
                break;

        case 5: numberOfProducts += (2+5+7+10+15);
                dayName = "Friday";
                break;

        case 6: numberOfProducts += (2+5+7+10+15+19);
                dayName = "Saturday";
                break;

        case 7: numberOfProducts += (2+5+7+10+15+19+25);
                dayName = "Sunday";
                break;
        default:
            printf("Invalid day selection!\n");
            return 1;
    }
    printf("%s days ended with %d sales.\n\n",dayName,numberOfProducts);

    return 0;
}
