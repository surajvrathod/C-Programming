#include <stdio.h>

int main() {
    long a,c,smallest=9,largest=0;
    printf("Please enter any ten digit number\t");
    scanf("%ld",&a);
    
    while(a>0)
    {
        c=a%10;
        if(c>largest)
            largest=c;
        if(c<smallest)
            smallest=c;
        a=a/10;
    }
    printf("The largest number is %ld\n",largest);
    printf("The smallest number is %ld\n",smallest);
    return 0;
}
