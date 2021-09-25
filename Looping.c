//
//  main.c
//  looping
//
//  Created by Suraj Vinayak Rathod on 12/07/21.
//

#include <stdio.h>

int main() {
    // insert code here...
    int a=1,b;
    printf("Please Enter the number to print the table\n");
    scanf("%d",&b);
    printf("The Table Of %d is \n",b);
    while (a<=10){
        printf("%d*%d=%d\n",b,a,a*b);
        a++;
    }
   
    return 0;
}
