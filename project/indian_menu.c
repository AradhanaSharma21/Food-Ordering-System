#include <stdio.h>
#include <stdlib.h>
 void indian_menu();

extern int totalprice;
 void indian_menu()
 {
     int tandoor=40,twaa=60,chole=120,matar=190,rajma=200,dish;
     char choise;
     do
     {
     printf("\n                    -----------------------INDIAN MENU-------------------------                  ");
     printf("\n1:Tandoori Roti     Rs:45/-\n2:Twaa Roti      Rs:60/-\n3:Chole Bhature      Rs:120/-\n4:Matar Paneer      Rs:190/-\n5:Rajma chawal      Rs:200/-\n");

         printf("\nEnter your choice: ");
         scanf(" %d",&dish);
     switch(dish)
     {
     case 1:
        printf("\n                   You ordered tandoori roti..");
        totalprice+=tandoor;
        savetofile("Tandoori roti",45);
        break;
    case 2:
         printf("\n                  You ordered twaa roti..");
      totalprice+=twaa;
      savetofile("Twaa roti",60);
        break;
    case 3:
         printf("\n                  You ordered chole bhature..");
      totalprice+=chole;
      savetofile("Chole bhature",120);
        break;
    case 4:
         printf("\n                  You ordered matar paneer..");
        totalprice+=matar;
        savetofile("Matar panir",190);
        break;
    case 5:
         printf("\n                  You ordered rajmaa chawal..");
        totalprice+=rajma;
        savetofile("Rajma chawal",200);
        break;
    default:
        printf("\nSorry wrong choice..!!");
        break;
     }
     printf("\nDo you want to order more Indian food?? (Y)es/(N)o: ");
     scanf(" %c",&choise);
 }while(choise!='N');
 return;
 }


