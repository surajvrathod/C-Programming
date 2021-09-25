//
//  main.c
//  Nested if
//
//  Created by Suraj Vinayak Rathod on 13/07/21.
//

#include <stdio.h>

int main() {
    // insert code here...
    int a,i,j;
    printf("Please Enter the number");
    scanf("%d",&a);
    for (i=1; i<=a; i++) {
        
    for (j=1; j<=10; j++) {
        printf("%d\t",i*j);
    }
        printf("\n");
    }
    return 0;
}
