//
//  main.c
//  shift
//
//  Created by Suraj Vinayak Rathod on 10/07/21.
//

#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    while (a==0) {
        printf("Invalid Input\n");
        scanf("%d",&a);
        if (a==0) {
            a=0;
        }
    }
    return 0;
}
