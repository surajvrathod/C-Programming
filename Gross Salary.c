//
//  main.c
//  gross sallery
//
//  Created by Suraj Vinayak Rathod on 10/07/21.
//

#include <stdio.h>

int main() {
    float bs,da,hra,gs;
    printf("Please enter basic sallery of employee in INR\n");
    scanf("%f",&bs);
    da=0.4*bs;
    hra=0.2*bs;
    gs=bs+da+hra;
    printf("The gross sallery of an employee is = %.0f INR\n",gs);
    return 0;
}
