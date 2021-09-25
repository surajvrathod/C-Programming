
#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int a=10;
    int *ptr=&a;
    int *ptra;
    int * null = NULL;
    printf("The address of a is %p\n",&a);
    printf("The value in pointer is %p\n",ptr);
    printf("The address of pointer is %p\n",&ptr);
    printf("The address of a using direct variable is %d\n",a);
    printf("The value at location pointer is %d\n",*ptr);
    printf("The address of garbage pointer is %p\n",&ptra);
    printf("The value of Null pointer is %p\n",null);
    printf("The address of Null pointer is %p\n",&null);

    return 0;
}
