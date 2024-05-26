


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
         else if((r==3||r==4)&&(c==1||c==2))
         {
             printf("*");
         }
         else if((r==7)&&(c==1||c==2||c==9||c==8))
         {
             printf("*");
         }
         else if((r==5||r==6)&&(c==1||c==2||c==6||c==7||c==8||c==9))
         {
             printf("*");
         }         
         
         else printf(" ");
        }  
          printf("\n");
    }
}
