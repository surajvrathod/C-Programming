//  main.c
//  fib iterative
//
//  Created by Suraj Vinayak Rathod on 28/07/21.
#include <stdio.h>
int fib_recursive(int n)
{
    if (n==1 || n==2){
        return n-1;
    }
    else{
        return fib_recursive(n-1)+fib_recursive(n-2);
    }
}
int fib_iterative(int n)
{    int a=0,b=1;
    for (int i=0; i<n-1; i++) {
        b=a+b;
        a=b-a;        }
    return a;
}
int main() {
    // insert code here...
    int num;
    printf("Enter the number at which fib series is to be displayed\n");
    scanf("%d",&num);
    printf("The fibonacci no using iterative at %d is %d \n",num,fib_iterative(num));
    printf("The fibonacci no using recursive at %d is %d \n",num,fib_recursive(num));

    return 0;
}
