#include <stdio.h>

int main()
{
    int a,b,c,d,e,f,g,h;
    printf("Please Enter any four digit number\n");
    scanf("%d",&a);
    b=a/10;
    c=b/10;
    d=c/10;
    e=c%10;
    f=b%10;
    g=a%10;
    
    printf("%d\n",d);
    printf("%d\n",e);
    printf("%d\n",f);
    printf("%d\n",g);
    h=d+e+f+g;
    printf("Sum of digits is %d\n",h);
     
    if(e<d && e<f && e<g)
    {
        printf("%d is a Smallest digit\n",e);
    }
    else if (d<f && d<g)
    {
        printf("%d is a Smallest digit\n",d);
    }
    else if(f<g)
    {
        printf("%d is a Smallest digit\n",f);
    }
    else
    {
        printf("%d is a Smallest digit\n",g);
    }
    

    if(e>d && e>f && e>g)
    {
        printf("%d is a Largest digit\n",e);
    }
    else if (d>f && d>g)
    {
        printf("%d is a Largest digit\n",d);
    }
    else if(f>g)
    {
        printf("%d is a Largest digit\n",f);
    }
    else
    {
        printf("%d is a Largest digit\n",g);
    }
}
