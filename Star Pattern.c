//  main.c
//  Print Star
//  Created by Suraj Vinayak Rathod on 29/07/21.
#include <stdio.h>

int main() {
    int num,rows;
l1:printf("Please Enter 0 or 1 !\n0.Star Pattern\n1.Reverse Star pattern\n");
    scanf("%d",&num);
    printf("Please enter no of rows and columns you want\n");
    scanf("%d",&rows);
    switch (num) {
        case 0:
            for (int i=1; i<=rows; i++) {
                for (int j=1; j<=i; j++) {
                    printf("%d ",j);
                }
                printf("\n");
            }
            break;
        case 1:
            for (int i=rows; i>=1; i--) {
                for (int j=1; j<=i; j++) {
                    printf("%d ",j);
                }
                printf("\n");
            }
            break;
            
        default:
            printf("Please Enter Valid Choice\n");
            goto l1;
            break;
    }

    return 0;
}
