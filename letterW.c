#include<stdio.h>

void main ()
{
    int r,c,i;
    for(r=1;r<=9;r++)
    {
        for(i=1;i<=2;i++)
        {
         for(c=1;c<=9;c++)
        {
          if((r<=5)&&(c==1||c==2||c==8||c==9))
          {
            printf("*");  
          }
         else if((r==6)&&(c==2||c==3||c==7||c==8))
         {
             printf("*");
         }
         else if(r==7 &&(c==3||c==4||c==6||c==7))
         {
             printf("*");
         }
         else printf(" ");
        }  
        
         
    }   printf("\n");
}
}
