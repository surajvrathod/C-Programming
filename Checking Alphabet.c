#include <stdio.h>
int main() {
    char c;
    printf("Please Enter any key\n");
    scanf("%c",&c);
    if((c>='a' && c<='z') ||(c>='A' && c<='Z'))
    {printf("%c is an Alphabet\n",c);
    }
    else
    {
        printf("%c is not an Alphabet\n",c);
    }
    return 0;
}
