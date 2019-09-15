#include <stdio.h>
#include <stdlib.h>
void chinese_menu();
extern int totalprice;


 void chinese_menu()
 {
     int noodle=45,chili=60,momos=40,roll=40,soup=80,dish;
     char choise;
     do
     {
     printf("\n                    -----------------------CHINESE MENU-------------------------                  ");
     printf("\n1:Hakka noodle       Rs:45/-\n2:Chicken chili      Rs:60/-\n3:Momos          Rs:40/-\n4:Egg-roll         Rs:40/-\n5:Chicken soup     Rs:80/-\n");

         printf("\nEnter your choice: ");
         scanf(" %d",&dish);
     switch(dish)
     {
     case 1:
        printf("\n                    You ordered Hakka noodle..");
        totalprice+=noodle;
        savetofile("Hakka noodle",45);
        break;
    case 2:
        printf("\n                    You ordered chicken chili..");
        totalprice+=chili;
        savetofile("chicken chili",60);
        break;
    case 3:
        printf("\n                    You ordered momos..");
        totalprice+=momos;
        savetofile("Momos",40);
        break;
    case 4:
        printf("\n                    You ordered egg roll..");
        totalprice+=roll;
        savetofile("Egg roll",40);
        break;
    case 5:
        printf("\n                    You ordered chicken soup..");
        totalprice+=soup;
        savetofile("Chicken soup",80);
        break;
    default:
        printf("\nSorry wrong choice..!!");
        break;
     }
     printf("\nDo you want to order more chinese food?? (Y)es/(N)o: ");
     scanf(" %c",&choise);
 }while(choise!='N');
 return;
 }

