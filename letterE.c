


#include<stdio.h>

void main ()
{
    int r,c;
    for(r=1;r<=9;r++)
    {
        for(c=1;c<=9;c++)
        {
          if((r==1||r==2||r==8||r==9)&&(c<=9))
          {
            printf("*");  
          }
         else if((r==3||r==7)&&(c==1||c==2))
         {
             printf("*");
         }
         else if((r==4||r==6)&&(c==1||c==2||c==7))
         {
             printf("*");
         }
         else if((r==5)&&c<=7)
         {
             printf("*");
         }
         else printf(" ");
        }  
          printf("\n");
    }
}
