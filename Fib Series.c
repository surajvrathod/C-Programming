#include"stdio.h"
int main()
{
    int a,first=0,second=1,next;
    printf("Enter the first number\n");
    scanf("%d",&a);
    if (a==1) {
        printf("%d\n",first);
    } else if(a==2 || a>2){
        printf("%d\n",first);
        printf("%d\n",second);
    }
    for (int i=2; i<a; i++) { //For getting values upto the count i.e. First 10.
//        while (next<=a-first) For getting fib values in the range i.e. <100.
//        {
        next=first+second;
        printf("%d \n",next);
        first=second;
        second=next;
//        }
}
    return 0;
}
