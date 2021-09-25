//
//  main.c
//  averageofmarks
//
//  Created by Suraj Vinayak Rathod on 14/07/21.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
//    int marks[10],sum=0;
//    for (int i=0; i<=9; i++) {
//        printf("Enter the marks of %d student\n",i+1);
//        scanf("%d",&marks[i]);
//        sum=sum+marks[i];
//
//    }
//
//    printf("%d\n",sum/10);
    int matrics [3][3];
    for (int i=0; i<=2; i++) {
        for (int j=0; j<=2; j++) {
            printf("Enter no 1-9 numbers\n");
            scanf("%d",&matrics[i][j]);
        
        }
        
    }
    for (int i=0; i<=2; i++) {
        for (int j=0; j<=2; j++) {
            printf("%d\t",matrics[i][j]);
    }
                   printf("\n");
                   }
    return 0;
}
