/*
Finding whether a number is positive or negative
find_pos_neg_num.c
practice16.c
*/
#include <stdio.h>
#include <conio.h>
void main(){
   int a;
   clrscr();
   printf("Insert a number : ");
   scanf("%d",&a);
   if (a>0)
   printf("The number is positive\n");
   else if (a<0)
   printf("The number negative\n");
      else 
      printf ("The number is zero\n");
      
      getch ();
    }
