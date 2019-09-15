#include <stdio.h>
#include <stdlib.h>

 fileread();
int fileread()
 {
     FILE *fhotel;
     fhotel= fopen("hotelfile.txt","r");
     char ch;
     if(fhotel==NULL)
     {
         printf("\nSORRY THIS FILE IS EMPTY..!!");
     }
     while((ch=fgetc(fhotel))!=EOF)
     {
         printf("%c",ch);
     }
    fclose(fhotel);
    return 0;
 }
