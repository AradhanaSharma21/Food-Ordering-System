#include <stdio.h>
#include <stdlib.h>

int totalprice=0;


int main()


{
    printf("     -----------------------***WELCOME TO HOTEL FAMILY DELIGHT***-------------------------\n");
    check_user();
    check_pass();
    menu_card();
    statement();
    printf("\n\n\n\n");
    printf(" _________________________________________YOUR ORDERS______________________________________________ \n\n");
    fileread();
    printf("\n        ---------------------------THANK YOU...HAVE A NICE DAY AHEAD...!!---------------------------\n");



return 0;
}
