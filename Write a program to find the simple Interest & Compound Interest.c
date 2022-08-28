#include <stdio.h>
#include <math.h>

int main()
{
    float principle , rate , time , SI , CI ;

    printf("Enter principle amount: ");
    scanf("%f", &principle);

    printf("Enter time: ");
    scanf("%f", &time);

    printf("Enter rate: ");
    scanf("%f", &rate);

    SI = (principle * rate * time)/100;
    
    CI =( principle* (pow((1 + rate / 100), time)))-principle;

	printf("Simple Intrest : %f \n",SI);
    printf("Compound Interest = %f \n", CI);

    return 0;
}
 
