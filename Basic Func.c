//
//  main.c
//  basic function
//
//  Created by Suraj Vinayak Rathod on 13/07/21.
//

#include <stdio.h>
int sum(int a, int b);
int takenumber();
void printstar(int n){
    for (int i=1; i<=n; i++) {
        printf("%d)%c \n",i,'*');
    }
}
int main() {
    int a,b,c,d;
    a=90;
    b=7;
    c=sum(a,b);
    printf("%d\n",c);
    printstar(5);
    d=takenumber();
    printf("the entered number is %d\n",d);
    return 0;
}
int sum(int a,int b){
    return a+b;
}
int takenumber(){
    int i;
    printf("Enter a number\n");
    scanf("%d",&i);
    return i;
}
