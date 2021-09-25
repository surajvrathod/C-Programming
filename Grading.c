//
//  main.c
//  grading
//
//  Created by Suraj Vinayak Rathod on 11/07/21.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int mark;
    printf("Please Enter  your marks\n");
    scanf("%d",&mark);
    if (mark>0) {
    
    
          if (mark>=90 && mark<100) {
        printf("Congrats! You scored A grade\n");
        }
       else if(mark>=80 && mark<=89) {
        printf("Congrats! You scored B grade\n");
         }
       else if(mark>=70 && mark<=79) {
        printf("Congrats! You scored C grade\n");
         }
      else if(mark>=60 && mark<=69) {
        printf("Congrats! You scored D grade\n");
         }
      else if(mark>=50 && mark<=59) {
        printf("Congrats! You scored E grade\n");
        }
      else if(mark>=1 && mark<=40) {
        printf("Sorry! You are failed\n");
        }
    }
      else {
          printf("Invalid Input\n");
     }
    return 0;
}
