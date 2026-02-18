#include <stdio.h>
#include <stdlib.h>

/*An electricity distribution company charges
its customers a monthly fee based on the total kilowatt-hours consumed
and a fixed subscription fee in exchange for the services provided.
The unit kilowatt-hour rate and subscription fee increase each month in line
with the monthly inflation rate.
Accordingly, let's create a program that calculates the amount of the customer's
electricity bill for a given month.
Bill Amount = Electricity Consumed * Unit Price + Subscription Fee */


int main()
{
    float MonthlyInflationRate,ElectricityConsumedMonthly;
    int whichMonthsBill;
    const float StartingUnitPrice = 1.5;
    const float InitialSubFee = 50.0;
    float currentUnitPrice = StartingUnitPrice;
    float currentSubFee = InitialSubFee;
    float BillAmount;
    printf("Please enter the Monthly inflation rate:");
    scanf("%f",&MonthlyInflationRate);

    printf("Please enter which month's bill this is:");
    scanf("%d",&whichMonthsBill);

    printf("Please enter the Electricity consumed monthly:");
    scanf("%f",&ElectricityConsumedMonthly);

    for(int i=1;i<whichMonthsBill;i++){
       currentUnitPrice = currentUnitPrice + (currentUnitPrice*MonthlyInflationRate/100.0);
       currentSubFee = currentSubFee + (currentSubFee*MonthlyInflationRate/100.0);
    }
    BillAmount = (ElectricityConsumedMonthly*currentUnitPrice)+currentSubFee;
    printf("Your monthly electricity bill: %.3f",BillAmount);
    return 0;
}
