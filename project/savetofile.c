#include <stdio.h>
#include <stdlib.h>
savetofile(char name[80],int rate );
//extern int totalprice;

int savetofile(char name[80],int rate)
 {

 FILE *fhotel;

 fhotel= fopen("hotelfile.txt","a");
 fprintf(fhotel,"%s \t %d\n",name,rate);


 fclose(fhotel);
 return 0;
 }

