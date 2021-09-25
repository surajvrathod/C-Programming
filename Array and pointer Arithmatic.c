//
//  main.c
//  array and pointer arithmatic
//
//  Created by Suraj Vinayak Rathod on 27/07/21.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
   char a='  3';
    char *ptra=&a;
    printf("%d\n",ptra);
    ptra++;
    printf("%d\n",ptra);
    ptra--;
    printf("%d\n",ptra);


    return 0;
}
