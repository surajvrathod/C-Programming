#include <stdio.h>

int main()
{
float a,b,c=1;
printf("Please Enter any number\a");
    scanf("%f",&a);
    printf("The Table Of %.1f is:\a",a);
    while (c<=10) {
        printf("%0.0f*%0.0f=%0.0f\n",a,c,a*c);
        c++;
        }
    return 0;
}
