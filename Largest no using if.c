//
//  main.c
//  largest using if
//
//  Created by Suraj Vinayak Rathod on 11/07/21.
//

#include <stdio.h>

int main() {
    int a,b,c;
    printf("Please enter three numbers!\n");
    scanf("%d %d %d",&a,&b,&c);
    if (a>b && a>c) {
        printf("A is max");
    }if (a>b && a>c) {
        printf("%d is max\n",a);
    }
    if (b>a && b>c) {
        printf("%d is max\n",b);
    }
    if (c>b && c>a) {
        printf("%d is max\n",c);
    }
    if (a==b && a==b && a==c) {
        printf("All are equals\n");
    }
    
    return 0;
}
