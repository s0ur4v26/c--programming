

#include<stdio.h>

void main ()
{
    int r,c;
    for(r=1;r<=9;r++)
    {
        for(c=1;c<=9;c++)
        {
          if((r==1||r==2||r==3||r==4||r==7||r==8||r==9)&&(c==1||c==2||c==8||c==9))
          {
            printf("*");  
          }
         
         else if((r==6||r==5)&&c<=9)
         {
             printf("*");
         }
         else printf(" ");
        }  
          printf("\n");
    }
}
