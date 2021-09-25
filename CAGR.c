#include<stdio.h>
#include <math.h>
int main()
{
float final,begin,time,cagr;
    printf("Initial Value: ");
    scanf("%f",&begin);
    printf("Final Value: ");
    scanf("%f",&final);
    printf("Time Period: ");
    scanf("%f",&time);

  cagr=pow((final/begin),(1/time))-1;
    
    printf("\n\nTotal CAGR is:% .2f\n",cagr
           *100);
    
    printf("\nThank You for using our services\n\n\n");
return 0;
}
