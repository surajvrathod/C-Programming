//
//  main.c
//  operators in c
//
//  Created by Suraj Vinayak Rathod on 10/07/21.
//

#include <stdio.h>

int main() {
    float a,b,c;
    printf("Enter any two numbers\n");
    scanf("%f%f",&a,&b);
    printf("The sum of %.0f and %.0f is %.0f\n",a,b,c=a+b);
    printf("The subtraction of %.0f and %.0f is %.0f\n",a,b,c=a-b);
    printf("The multiplication of %.0f and %.0f is %.0f\n",a,b,c=a*b);
    printf("The division of %.0f and %.0f is %.0f\n",a,b,c=a/b);
    return 0;
}
