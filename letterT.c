


#include<stdio.h>

void main ()
{
    int r,c;
    for(r=1;r<=9;r++)
    {
        for(c=1;c<=9;c++)
        {
         if(r<=2&&c<=9)
         {
             printf("*");
         }
         else if(r<=9&&(c==4||c==5))
         {
             printf("*");
         }
         else printf(" ");
        }  
          printf("\n");
    }
}
