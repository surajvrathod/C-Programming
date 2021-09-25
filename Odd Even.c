//
//  main.c
//  odd even
//
//  Created by Suraj Vinayak Rathod on 11/07/21.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int n=0;
    printf("Enter Number!\n");
    scanf("%d",&n);
    if (n%2==0) {
        printf("Even number\n");
    } else {
        printf("Odd number\n");
    }
    return 0;
}
