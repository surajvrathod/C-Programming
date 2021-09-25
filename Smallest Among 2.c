#include<stdio.h>
main()
{
    int a,b,c,d,e,f,i,j,arr[100],arr1[100];
    printf("Enter the 1st number\n");
    scanf("%d",&a);
    printf("Enter the 2nd number\n");
    scanf("%d",&b);

    i=0;
    while(a>0)
    {
        c=a%10;
        a=a/10;
        arr[i]=c;
        i++;
        f=i;
    }
    i=0;
        for(j=1; j<f; j++)
        {
           if(arr[i]>arr[j])
           {
              e=arr[i];
              arr[i]=arr[j];
              arr[j]=e;
           }
        }

    i=0;
    while(b>0)
    {
        c=b%10;
        b=b/10;
        arr1[i]=c;
        i++;
        f=i;
    }
    i=0;
        for(j=1; j<f; j++)
        {
           if(arr1[i]>arr1[j])
           {
              e=arr1[i];
              arr1[i]=arr1[j];
              arr1[j]=e;
           }
        }
        printf("%d\n",arr1[0]);
        printf("%d\n",arr[0]);
}
