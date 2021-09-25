//
//  main.c
//  count digits
//
//  Created by Suraj Vinayak Rathod on 21/07/21.
//

#include <stdio.h>

int main() {
    // insert code here...
   long number,a,b,count=0,sum=0;
    printf("Please enter number\n");
    scanf("%ld",&number);
    while (number>0) {
        a=number%10;
        b=number/10;
        number=b;
        sum=sum+a;
        count++;
    }
    printf("Sum of Digits is:% ld \n",sum);
    printf("No of Digits are: %ld \n",count);
    return 0;
}
