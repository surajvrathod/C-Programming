#include <stdio.h>

int main() {
    // insert code here...
    int num,a=1;
    printf("Please Enter the number!\n");
    scanf("%d",&num);
    if (num==0 || num==1) {
        printf("%d\n",1);
    }
    else{
        while (num>0) {
            a=a*num;
            num--;
        }
        printf("%d\n",a);
    }
    return 0;
}
