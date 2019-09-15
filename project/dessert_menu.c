#include <stdio.h>
#include <stdlib.h>
 void desserts_menu();
extern int totalprice;
 void desserts_menu()
 {
     int rasgulla=200,pie=180,pudding=160,ice_cream=130,cake=200,dish;
     char choise;
     do
     {
     printf("\n                    -----------------------DESSERTS MENU-------------------------                  ");
     printf("\n1:Rasgulla    Rs:200/-\n2:Apple pie      Rs:180/-\n3:chocolate pudding     Rs:160/-\n4:vanilla ice cream     Rs:130/-\n5:Molten cake     Rs:200/-\n");

         printf("\nEnter your choice: ");
         scanf(" %d",&dish);
     switch(dish)
     {
     case 1:
          printf("\n                You ordered rasgulla..");
        totalprice+=rasgulla;
        savetofile("Rasgulla",200);
        break;
    case 2:
         printf("\n                 You ordered apple pie..");
      totalprice+=pie;
      savetofile("Apple pie",180);
        break;
    case 3:
         printf("\n                  You ordered chocolate pudding");
      totalprice+=pudding;
      savetofile("chocolate pudding",160);
        break;
    case 4:
         printf("\n                  You ordered vanilla ice cream..");
        totalprice+=ice_cream;
        savetofile("Vanilla ice cream",120);
        break;
    case 5:
         printf("\n                  You ordered molten cake..");
        totalprice+=cake;
        savetofile("Molten cake",200);
        break;
    default:
        printf("\nSorry wrong choice..!!");
        break;
     }
     printf("\nDo you want to order more dessert?? (Y)es/(N)o: ");
     scanf(" %c",&choise);
 }while(choise!='N');
 return;
 }



