//
//  main.c
//  recurcive function
//
//  Created by Suraj Vinayak Rathod on 13/07/21.
//

#include <stdio.h>
int factorial(int number);
int main() {
    // insert code here.
    int num;
    printf("Enter the number whose factorial is to be calculated!\n");
    scanf("%d",&num);
    printf("The factorial of %d is %d\n",num,factorial(num));
    return 0;
}
int factorial(int number){
    if (number==0 || number==1) {
        return 1;
    } else {
        return (number*factorial(number-1));
    }
   
}
