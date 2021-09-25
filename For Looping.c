//
//  main.c
//  for looping
//
//  Created by Suraj Vinayak Rathod on 12/07/21.
//

#include <stdio.h>

int main() {
    int i,a=0;
    printf("Please Enter the number\n");
    scanf("%d",&a);
    for (i=1; i<=10; i++) {
        printf("%d*%d=%d\n",a,i,a*i);
    }
    
    return 0;
}
