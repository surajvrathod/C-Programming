//
//  main.c
//  sum of digit
//
//  Created by Suraj Vinayak Rathod on 11/07/21.
//

#include <stdio.h>

int main() {
    int a,b,c,d;
    printf("Please Enter three digit no\n");
    scanf("%d",&a);
    b=a%10;    //contains 123%10=3
    c=a/10;    //contains 123/10=12
    a=c/10;    //contains  12/10=1
    d=c%10;    //contains 12%10=2
    printf("Sum of digit is %d\n",b+d+a);
    return 0;
}
