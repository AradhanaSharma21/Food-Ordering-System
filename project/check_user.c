#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 void check_user();


 void check_user()
 {

 char name[50]="Hello";
 int a;



 for(a=0;a<4;a++)
 {
 printf("\nEnter Username: ");
 scanf(" %s",name);
 int x= strcmp(name,"Hello");
 if( x==0)
 {
     printf("USERNAME Matched..!!\n");
     break;
 }
 else
 {
     printf("Sorry Wrong USERNAME..!!\n");
 }
 if(a>=3)
 {
     printf("\bYou are Blocked for sometimes...Try later..!!");
     exit(0);
 }
 }
 return;
 }


