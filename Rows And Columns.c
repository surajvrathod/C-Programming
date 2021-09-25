//
//  main.c
//  Rows and columns
//
//  Created by Suraj Vinayak Rathod on 13/07/21.
//

#include <stdio.h>

int main() {
    // insert code here...
    int rows,columns,k=1;
    printf("Please enter rows\n");
    scanf("%d",&rows);
    printf("Please enter columns\n");
    scanf("%d",&columns);
    //int a[rows][columns];
    int i=1;
    while (i<=rows) {
       
        int j=1;
        while (j<=columns) {
            printf("%d\t",k);
            k++;
           
            j++;
        }
        i++;
        printf("\n");
    }return 0;
}

