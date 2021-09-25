#include <stdio.h>
#include <math.h>
int main(){
    int num,answer=1,i;
    scanf("%d\n", &num);
    int values[num];
    
    for (i=0; i<num; i++) {
        scanf("%d ",&values[i]);
    }
    for (i=0; i<num; i++) {
        printf("% d",values[i]);
        
    }
    printf("\n");
    
}


