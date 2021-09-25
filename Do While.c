
#include <stdio.h>
int main() {
    int index=1,num;
    printf("Please Enter The range upto which number is to be printed\n");
    scanf("%d",&num);
    printf("Numbers are:\n");
    while (index<=num)
    {printf("%d\n",index);
        index=index+1;
    }
    return 0;
}
