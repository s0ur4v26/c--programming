

#include<stdio.h>

void main ()
{
    int r,c,i;
    for(r=1;r<=9;r++)
    {
        for(c=1;c<=7;c++)
        {
          if((r==3||r==4||r==6||r==7)&&(c==1||c==2||c==6||c==7))
          {
            printf("*");  
          }
         else if((r==2||r==8)&&c<=7)
         {
             printf("*");
         }
         else if((r==1||r==5||r==9)&&c<=6)
         {
             printf("*");
         }
         else printf(" ");
        }  
          printf("\n");
    }
}
