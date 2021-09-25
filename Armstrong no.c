//
//  main.c
//  Armstrong No
//
//  Created by Suraj Vinayak Rathod on 11/07/21.
//

#include <stdio.h>

int main()
{
    int n,temp,sum=0,r;
    printf("Enter any number\n");
    scanf("%d",&n);
    temp=n;
    while (n>0) {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if (temp==sum) {
        printf("Armstrong No\n");
    } else {
        printf("Not Armstrong no\n");
    }
    return 0;
}
