#include<stdio.h>
int main()
{
    int  a = 1,amount,cube,arr[100],i=0;
    printf("Please enter the shopping amount\n");
    scanf("%d",&amount);
    
while( cube<amount)
{cube=a*a*a;
    printf("%d\n",cube);
    a++;
    arr[i]=cube;
    i++;
}
    for(i=0; i<=amount; i++)
    {
    if(cube == amount)
        printf("you are elligible\n");
    if(cube != amount)
        printf("You are not elligible\n");
        
    }
return 0;
}

