#include <stdio.h>
#include <stdlib.h>

int main()
{
    double gasPressure,gasVolume,Celsius,Kelvin,numberOfMoles;
    const double gasConstant=8.314;
    int cont=1;
    printf("Please enter the mole value:");
    scanf("%lf",&numberOfMoles);

    printf("Please enter the gas volume value:");
    scanf("%lf",&gasVolume);

    printf("Please enter the temperature (Celsius):");
    scanf("%lf",&Celsius);

    while(cont==1){
        if( gasVolume<0 || Celsius < -273.15){
            printf("ERROR! You entered a value that  violates the laws of physics.");
            printf("Pressure and volume cannot be negative. Temperature cannot be less than -273.15°C.\n");
        }
        else{
            Kelvin = Celsius + 273.15;
            gasPressure=(numberOfMoles*gasConstant*Kelvin) / gasVolume;

            printf("Gas pressure value in a closed container: %lf",gasPressure);
        }
        printf("\nDo you want to calculate again? (1 for Yes, 0 for No): ");
        scanf("%d", &cont);
    }
    printf("Exiting the program.Goodbye!\n\n");
    return 0;
}

