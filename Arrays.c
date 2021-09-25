#include <stdio.h>

int main() {
    int marks[4],i,j,x=0,sum=0;
    float average=0;
    for (int j=0; j<=3; j++) {
        printf("Please enter values\n");
        scanf("%d",&marks[j]);
    }
    for (int j=0; j<=3; j++) {
        printf("%d ",marks[j]);
    }
    for (i=0; i<=3; i++) {
        for (j=i+1; j<=3; j++) {
            if (marks[i]<marks[j]) {
                x=marks[i];
                marks[i]=marks[j];
                marks[j]=x;
            }
        }
    }
    printf("\n");
    printf("The largest no in given array is %d \n",marks[0]);
    printf("The second largest no in given array is %d \n",marks[1]);
    
    for (i=0; i<=3; i++) {
        sum=sum+marks[i];
    }
    printf("The total sum of the given array is %d \n",sum);
    
    int size = sizeof(marks)/sizeof(marks[0]);
    average=sum/size;
    printf("The average of all the elements of array is %.2f \n",average);
}
