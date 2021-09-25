//
//  main.c
//  fibbonicci series
//
//  Created by Suraj Vinayak Rathod on 21/07/21.
//

#include <stdio.h>
int fib_recursive(int n);
int main() {
    // insert code here...
    int num;
    printf("enter number!\n");
    scanf("%d",&num);
    printf("%d\n",fib_recursive(num));
    return 0;
}
int fib_recursive(int n)
{
    if (n==0 || n==1) {
        return n;
    } else {
        return fib_recursive(n-1)+fib_recursive(n+1);
    }
      
      }
