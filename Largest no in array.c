//
//  main.c
//  largest no in array
//
//  Created by Suraj Vinayak Rathod on 22/07/21.

#include <stdio.h>

int main() {
    // insert code here...
    int size,i,j,x;
    printf("Please enter the size of array\n");
    scanf("%d",&size);
    int marks[size];
    printf("Please enter the %d numbers\n",size);
    for (i=0; i<size; i++) {
        scanf("%d",&marks[i]);
    }
    for (i=0; i<size; i++) {
        printf("%d ",marks[i]);
    }
    for (i=0; i<size; i++) {
        for (j=i+1; j<size; j++) {
            if (marks[i]>marks[j]) {
                x=marks[i];
                marks[i]=marks[j];
                marks[j]=x;
            }
        }
        
    }
    printf("\n");
    for (i=0; i<size; i++) {
        printf("%d ",marks[i]);
    }
    printf("\n");
    
    printf("The size of array is %d \n",sizeof(marks)/sizeof(marks[0]));
    return 0;
}
