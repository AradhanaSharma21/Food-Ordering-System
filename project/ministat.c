#include <stdio.h>
#include <stdlib.h>
statement();
extern int totalprice;

int statement()
 {

 FILE *fhotel;

 fhotel= fopen("hotelfile.txt","a");
 fprintf(fhotel,"\n**********************************************************************************\n");
 fprintf(fhotel,"Your bill is %d",totalprice);

 fclose(fhotel);
 return 0;
 }

