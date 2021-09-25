//
//  main.c
//  gifting
//
//  Created by Suraj Vinayak Rathod on 15/03/21.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int math,science;
    printf("Have you passed math examination\n");
    scanf("%d",&math);
    printf("Have you passed science examination\n");
    scanf("%d",&science);
    if (math ==1 && science ==1) {
        printf("Congrats! You got 45 Rupees\n");
    }
    else if (math ==0 && science ==1) {
        printf("Congrats! You got 15 Rupees\n");
    }
    else if (math ==1 && science==0)
    {printf("Congrats! You got 15 Rupees\n");}
    else
    { printf("Sorry! You cannot get any gift\n");}
   
    return 0;
}
