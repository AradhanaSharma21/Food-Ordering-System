#include <stdio.h>
#include <stdlib.h>
 void continental_menu();

extern int totalprice;
 void continental_menu()
 {
     int pasta=80,toast=60,caribbean=140,roasted=120,bread=80,dish;
     char choise;
     do
     {

     printf("\n                    -----------------------CONTINENTAL MENU-------------------------                  ");
     printf("\n1:White sauce Pasta    Rs:80/-\n2:Corn Toast      Rs:60/-\n3:Caribbean Chicken      Rs:140/-\n4:Roasted chicken      Rs:120/-\n5:Cheese bread roll      Rs:80/-\n");

         printf("\nEnter your choice: ");
         scanf(" %d",&dish);
     switch(dish)
     {
     case 1:
          printf("\n                 You ordered white sauce pasta..");
        totalprice+=pasta;
        savetofile("White sauce pasta",80);
        break;
    case 2:
         printf("\n                  You ordered corn toast..");
      totalprice+=toast;
      savetofile("Corn toast",60);
        break;
    case 3:
     printf("\n                      You ordered caribbean chicken..");
      totalprice+=caribbean;
      savetofile("Caribbean chicken",140);
        break;
    case 4:
        printf("\n                   You ordered roasted chicken..");
        totalprice+=roasted;
        savetofile("Roasted chicken",120);
        break;
    case 5:
         printf("\n                  You ordered cheese bread roll..");
        totalprice+=bread;
        savetofile("Bread roll",80);
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



