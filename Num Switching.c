//
//  main.c
//  switching
//
//  Created by Suraj Vinayak Rathod on 12/07/21.
//

#include <stdio.h>

int main() {
    int a=0;
    printf("Please enter any number\n");
    scanf("%d",&a);
    switch (a) {
        case 1:
            printf("you entered %d\n",a);
            break;
        case 2:
            printf("You entered %d\n",a);
            break;
        case 3:
            printf("You entered %d\n",a);
            break; case 4:
            printf("You entered %d\n",a);
            break; case 5:
            printf("You entered %d\n",a);
            break; case 6:
            printf("You entered %d\n",a);
            break; case 7:
            printf("You entered %d\n",a);
            break;
        default:
            printf("Please enter values between 1 to 7\n");
            break;
    }
    
    return 0;
}
