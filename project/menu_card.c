#include <stdio.h>
#include <stdlib.h>
//void menu_card();


void menu_card()
{
   int ch;
   char choice;
   int totalprice=0;
   do
    {
    printf("\n------------------------------------------MENU CARD----------------------------------------\n");
    printf("\n1:\"Chinese food\" \t2:\"Indian food\" \n3:\"Continental food\" \t4:\"Family Delight special\"\n5:\"Desserts\"\t\t6:\"Exit\"");

    printf("\nEnter your choice : ");
    scanf(" %d",&ch);

       switch(ch)
    {
    case 1:
        chinese_menu();
        break;
    case 2:
        indian_menu();
        break;
    case 3:
        continental_menu();
        break;
    case 4:
        delight_special();
        break;
    case 5:
        desserts_menu();
        break;
    case 6:
        exit;
    default:
        printf("\nSorry wrong choice..!!");
        break;
    }

    printf("\nDo you want to order more?? (Y)es/(N)o : ");
    scanf(" %c",&choice);
    }while(choice!='N');


    return;
}
