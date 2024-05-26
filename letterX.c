#include<stdio.h>

void main ()
{
    int r,c;
    for(r=1;r<=9;r++)
    {
        
        
         for(c=1;c<=9;c++)
        {
          if((r==1||r==9)&&(c==1||c==2||c==9))
          {
              printf("*");
          }
          else if((r==2||r==8)&&(c==2||c==3||c==8||c==9))
          {
              printf("*");
          }
          else if((r==3||r==7)&&(c==3||c==4||c==7||c==8))
          {
              printf("*");
          }
          else if((r==7)&&(c==4||c==3||c==7||c==8))
          {
              printf("*");
          }
          else if((r==5||r==4)&&(c==5||c==6))
          {
              printf("*");
          }
          else if(r==6&&(c==4||c==5||c==6||c==7))
          {
              printf("*");
          }
         else printf(" ");
          
        
         
    }   printf("\n");
}
}
