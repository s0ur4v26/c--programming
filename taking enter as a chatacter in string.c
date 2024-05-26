#include <stdio.h>
#include <string.h>
#include<windows.h>

int main()
{
    system("color 05");
   int i=0,nL1=0,nL2=0;;
   char text1[50],text2[1024];
   text2[0]=0;
   start:
   printf("press( << + enter) to exit the program -->input the text: \n-------------------------------------------------------\n");
   newline:
   gets(text1);
   nL1=strlen(text1);
   strcat(text2,text1);
   nL2=strlen(text2);
   text2[nL2]='\n';
   text2[nL2+1]=0;
   if(text1[nL1-2]=='<'&&text1[nL1-1]=='<')
   {   nL2=strlen(text2);
       text2[nL2]='\0';
       goto end;
   }
   goto newline;
   end:
   printf("\n \nprinting the input :\n--------------------------------------\n");
    nL2=strlen(text2);
   for(i=0;i<=(nL2-4);i++)
   {
       printf("%c",text2[i]);
   }
   printf("\n\n\n\n\n");
    for(i=0;i<=nL2;i++)
   {
       text2[i]='\0';
       text1[i]='\0';
   }
      goto start;
}
