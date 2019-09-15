#include <stdio.h>
#include <stdlib.h>
 void check_pass();


 void check_pass()
 {
 int pin=1807,ch,a;



 for(a=0;a<4;a++)
 {
 printf("\nEnter your four digit PIN: ");
 scanf(" %d",&ch);
 if(pin==ch)
 {
     printf("PIN Matched..!!\n");
     break;
 }
 else
 {
     printf("Sorry Wrong PIN..!!\n");
 }
 if(a>=3)
 {
     printf("\bYour PIN is Blocked for sometimes...Try later..!!");
     exit(0);
 }
 }
 return;
 }

