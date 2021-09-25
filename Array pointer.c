//
//  main.c
//  array pointer
//
//  Created by Suraj Vinayak Rathod on 27/07/21.
//

#include <stdio.h>
int main(int argc, const char * argv[]) {
    // insert code here...
    int n;
    printf("Please enter the no of elements\n");
    scanf("%d",&n);
    int arr[n],*arrptr=arr;
    for (int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    printf("The address of first element of array is %d\n",&arr[0]);
    printf("The address of first element of array is %d\n",arr);
    printf("The address of second element of array is %d\n",&arr[1]);
    printf("The address of second element of array is %d\n",arr+1);

    printf("The Value at address of first element of array is %d\n",*(&arr[0]));
    printf("The Value at address of first element of array is %d\n",*(arr));
    printf("The Value at address of first element of array is %d\n",arr[0]);
    printf("The Value at address of second element of array is %d\n",*(&arr[1]));
    printf("The Value at address of second element of array is %d\n",*(arr+1));
    printf("The Value at address of second element of array is %d\n",arr[1]);
    
    for (int i=0; i<sizeof(arr)/sizeof(arr[0]); i++) {
        printf("%d\n",*arrptr);
        arrptr++;
    }
    return 0;
}
