# include <stdio.h>
int main(){
int hero,count=3;
jump:printf("Enter your favorite NUM 1 to 10 and see your matching personality HERO\n");
    count= count-1;
    scanf("%d",&hero);
    
switch(hero) {
 case 1:
   printf("your Matching personality Hero [JOKER] sorry! this the villans hero ha.. ha..\n");
   break;
 case 2:
 printf("your Matching personality Hero \n[BATMAN]\n");
 break;
  case 3:
  printf("your Matching personality Hero \n[CAPTAIN AMERICA]\n");
  break;
  case 4:
   printf("your Matching personality Hero \n[SPIDER MAN]\n");
   break;
  case 5:
    printf("your Matching personality Hero \n[IRON MAN]\n");
    break;
   case 6:
  printf("your Matching personality Hero \n[ANT MAN]\n");
  break;
  case 7:
  printf("your Matching personality Hero \n[BLACK PANTHER]\n");
  break;
   case 8:
  printf("your Matching personality Hero \n[THOR]\n");
  break;
    case 9:
  printf("your Matching personality Hero \n[HAWK EYE]\n");
  break;
  case 10:
  printf("your Matching personality Hero \n[HULK]\n");
  break;
        
  default:
        if (count>0) {
  printf("please enter 1 to 10 NUMBERS\n");
        goto jump;
        }
        else{
            printf("You crossed your limit\n");
        }
 }
 return 0;
}
