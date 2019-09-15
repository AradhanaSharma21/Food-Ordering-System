#include <stdio.h>
#include <stdlib.h>
 void delight_special();

extern int totalprice;
 void delight_special()
 {
     int Littee=100,puri=80,bhapa=180,biryani=200,poli=100,dish;
     char choise;
     do
     {
     printf("\n                    -----------------------DELIGHT-SPECIAL MENU-------------------------                  ");
     printf("\n1:Littee chokha    Rs:100/-\n2:Dal puri      Rs:80/-\n3:Ilish bhapa      Rs:180/-\n4:Chicken Biryani      Rs:200/-\n5:Puran poli     Rs:100/-\n");

         printf("\nEnter your choice: ");
         scanf(" %d",&dish);
     switch(dish)
     {
     case 1:
        printf("\n                    You ordered littee chokha..");
        totalprice+=Littee;
        savetofile("littee chokha",100);
        break;
    case 2:
         printf("\n                   You ordered dal puri..");
      totalprice+=puri;
      savetofile("Dal puri",80);
        break;
    case 3:
         printf("\n                   You ordered irish bhapa..");
      totalprice+=bhapa;
      savetofile("Irish bhapa",180);
        break;
    case 4:
         printf("\n                   You ordered chicken biryani..");
        totalprice+=biryani;
        savetofile("chicken biriyani",200);
        break;
    case 5:
         printf("\n                    You ordered puran poli..");
        totalprice+=poli;
        savetofile("puran poli",100);
        break;
    default:
        printf("\n   Sorry wrong choice..!!");
        break;
     }
     printf("\n\nDo you want to order more delight special food?? (Y)es/(N)o: ");
     scanf(" %c",&choise);
 }while(choise!='N');
 return;
 }


