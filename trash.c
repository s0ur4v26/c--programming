#include<stdio.h>
#include<windows.h>
#include <unistd.h>
#include <string.h>
int font_style =178 ;

//font color
void Black()   {printf("\033[1;30m");} 
void red()     {printf("\033[1;31m");}
void green()   {printf("\033[1;32m");}
void yellow()  {printf("\033[1;33m");}
void blue()    {printf("\033[1;34m");} 
void purple()  {printf("\033[1;35m");}
void cyan()    {printf("\033[1;36m");}
void white()   {printf("\033[1;37m");}


//for letter A

void writeA (int r)
{
    int c;red();

        for(c=1;c<=9;c++)
        {
          if((r==3||r==4||r==6||r==7||r==8||r==9)&&(c==1||c==2||c==8||c==9))  printf("%c",font_style);
          else if((r==1)&&(c==3||c==4||c==5||c==6||c==7)) printf("%c",font_style);
          else if((r==2)&&(c==2||c==3||c==4||c==5||c==6||c==7||c==8)) printf("%c",font_style);
          else if((r==5||r==6)&&c<=9) printf("%c",font_style);
          else printf(" ");
        }
}

//for letter B

void writeB (int r)
{
    int c;green();
       for(c=1;c<=7;c++)
        {
          if((r==3||r==4||r==6||r==7)&&(c==1||c==2||c==6||c==7)) printf("%c",font_style);
          else if((r==2||r==8)&&c<=7) printf("%c",font_style);
          else if((r==1||r==5||r==9)&&c<=6) printf("%c",font_style);
          else printf(" ");
        }
}

//for letter c

void writeC (int r)
{
    int c;blue();

        for(c=1;c<=9;c++)
        {
         if((r==3||r==4|r==5||r==6||r==7)&&(c==1||c==2))printf("%c",font_style);   
         else if((r==2||r==8)&&c<=9) printf("%c",font_style);
         else if((r==1||r==9)&&(c==2||c==3||c==4||c==5||c==6||c==7||c==8||c==9)) printf("%c",font_style);
         else printf(" ");
        }

}


//for letter D

void writeD (int r)
{
    int c;yellow();

        for(c=1;c<=9;c++)
        {
         if((r==3||r==4||r==5||r==6||r==7)&&(c==1||c==2||c==8||c==9)) printf("%c",font_style);
         else if((r==2||r==8)&&c<=8) printf("%c",font_style);
         else if((r==1||r==9)&&c<=7)printf("%c",font_style);
         else printf(" ");
        }

}


//for letter E

void writeE (int r)
{
    int c;cyan();

        for(c=1;c<=9;c++)
        {
          if((r==1||r==2||r==8||r==9)&&(c<=9)) printf("%c",font_style);
          else if((r==3||r==7)&&(c==1||c==2)) printf("%c",font_style);
          else if((r==4||r==6)&&(c==1||c==2||c==7))printf("%c",font_style);
          else if((r==5)&&c<=7) printf("%c",font_style);
          else printf(" ");
        }

}


//for letterF

void writeF (int r)
{
    int c;purple();

        for(c=1;c<=9;c++)
        {
          if((r==1||r==2)&&(c<=9)) printf("%c",font_style);
          else if((r==3||r==7||r==8||r==9)&&(c==1||c==2)) printf("%c",font_style);
          else if((r==4||r==6)&&(c==1||c==2||c==7))printf("%c",font_style);
          else if((r==5)&&c<=7)  printf("%c",font_style);        
          else printf(" ");
        }

}


//for letter G

void writeG (int r)
{
    int c;white();

        for(c=1;c<=9;c++)
        { 
         if((r==1||r==2||r==8||r==9)&&(c<=9)) printf("%c",font_style);
         else if((r==3||r==4)&&(c==1||c==2)) printf("%c",font_style);
         else if((r==7)&&(c==1||c==2||c==9||c==8))printf("%c",font_style);
         else if((r==5||r==6)&&(c==1||c==2||c==6||c==7||c==8||c==9)) printf("%c",font_style);
         else printf(" ");
        }


}


//for letter H

void writeH (int r)
{
    int c;red();

        for(c=1;c<=9;c++)
        {
          if((r==1||r==2||r==3||r==4||r==7||r==8||r==9)&&(c==1||c==2||c==8||c==9))  printf("%c",font_style);
          else if((r==6||r==5)&&c<=9) printf("%c",font_style);
          else printf(" ");
        }


}


//for letter I

void writeI (int r)
{
    int c;purple();

        for(c=1;c<=9;c++)
        {
          if((r==1||r==2||r==8||r==9)&&(c<=9)) printf("%c",font_style);
          else if((r==3||r==4||r==5||r==6||r==7)&&(c==4||c==5||c==6)) printf("%c",font_style);
          else printf(" ");
        }


}

//for letter J


void writeJ (int r)
{
    int c;cyan();

        for(c=1;c<=9;c++)
        {
          if((r==1||r==2)&&(c<=9)) printf("%c",font_style);
          else if((r==3||r==4||r==5)&&(c==8||c==9)) printf("%c",font_style);
          else if((r==6)&&(c==4||c==5||c==8||c==9)) printf("%c",font_style);
          else if((r==7||r==8)&&(c==5||c==6||c==7||c==8||c==9))printf("%c",font_style);
          else printf(" ");
        }


}


//for letter K

void writeK (int r)
{
    int c;yellow();

        for(c=1;c<=8;c++)
        {
          if((r==4||r==5||r==6)&&(c<=4)) printf("%c",font_style);
          else if((r==3||r==7)&&(c==1||c==2||c==4||c==5))printf("%c",font_style);
          else if((r==2||r==8)&&(c==1||c==2||c==5||c==6)) printf("%c",font_style);
          else if((r==1||r==9)&&(c==1||c==2||c==6))  printf("%c",font_style);
          else printf(" ");
        }


}


//for letter L

void writeL (int r)
{
    int c;green();

        for(c=1;c<=9;c++)
        {
          if(r<=7&&c<=2)printf("%c",font_style);
          else if((r==8||r==9)&&c<=9) printf("%c",font_style);
          else printf(" ");
        }


}


//for letter M

void writeM (int r)
{
    int c;red();
    for(c=1;c<=9;c++)
        {
          if(r==1 &&(c==1||c==2||c==8||c==9)) printf("%c",font_style);
          else if((r==2)&&(c==1||c==2||c==3||c==7||c==8||c==9))  printf("%c",font_style);
          else if((r==3)&&(c==1||c==2||c==3||c==4||c==6||c==8||c==7||c==9))printf("%c",font_style);
          else if((r==4)&&(c==1||c==2||c==4||c==5||c==6||c==8||c==9)) printf("%c",font_style);
          else if((r==5)&&(c==1||c==2||c==5||c==8||c==9))printf("%c",font_style);
          else if((r==6||r==7||r==8||r==9)&&(c==1||c==2||c==8||c==9))printf("%c",font_style);
          else printf(" ");
        }

}


//for letter N

void writeN(int r)
{
    int c;red();
      for(c=1;c<=9;c++)
        {
          if((r==1||r==8||r==9)&&(c==1||c==2||c==8||c==9)) printf("%c",font_style);
          else if(r==7&&(c==1||c==2||c==7||c==8||c==9))printf("%c",font_style);
          else if(r==6&&(c==1||c==2||c==6||c==7||c==8||c==9)) printf("%c",font_style);
          else if(r==5&&(c==1||c==2||c==5||c==6||c==8||c==9)) printf("%c",font_style);
          else if(r==4&&(c==1||c==2||c==4||c==5||c==8||c==9)) printf("%c",font_style);
          else if(r==3&&(c==1||c==2||c==3||c==4||c==8||c==9)) printf("%c",font_style);
          else if(r==2&&(c==1||c==2||c==3||c==8||c==9)) printf("%c",font_style);
          else printf(" ");
        }

}



//for letter O

void writeO (int r)
{
    int c;white();

        for(c=1;c<=9;c++)
        {
          if((r==3||r==4||r==5||r==6||r==7)&&(c==1||c==2||c==8||c==9))printf("%c",font_style);
          else if((r==1||r==2||r==8||r==9)&&c<=9)printf("%c",font_style);
          else printf(" ");
        }

}

//for letter P

void writeP (int r)
{
    int c;cyan();

        for(c=1;c<=9;c++)
        {
          if(r==1&&c<=5)printf("%c",font_style);
          else if((r==2||r==6)&&c<=6)  printf("%c",font_style);
          else if((r==3||r==4)&&(c==1||c==2||c==6||c==7))  printf("%c",font_style);
          else if(r==5&&c<=7) printf("%c",font_style);
          else if((r==7||r==8||r==9)&&(c==1||c==2)) printf("%c",font_style); 
          else printf(" ");
        }

}


//for letter Q

void writeQ (int r)
{
    int c;purple();

        for(c=1;c<=9;c++)
        {
          if((r==3||r==4||r==7)&&(c==1||c==2||c==8||c==9)) printf("%c",font_style);
          else if((r==1||r==2||r==7||r==8)&&c<=9) printf("%c",font_style);
          else if(r==9&&(c==7||c==8)) printf("%c",font_style);
          else if(r==5&&(c==1||c==2||c==4||c==5||c==8||c==9)) printf("%c",font_style);
          else if(r==6&&(c==1||c==2||c==5||c==6||c==8||c==9)) printf("%c",font_style);       
          else printf(" ");
        }

}


//for letter R

void writeR (int r)
{
    int c;purple();

        for(c=1;c<=8;c++)
        {
          if(r==1 && c<=5) printf("%c",font_style);
          else if((r==2||r==6)&&c<=6)printf("%c",font_style);
          else if((r==3||r==4)&&(c==1||c==2||c==6||c==7)) printf("%c",font_style);
          else if(r==5&&c<=7) printf("%c",font_style);
          else if((r==7||r==8||r==9)&&(c==1||c==2||c==6||c==7))  printf("%c",font_style);
          else printf(" ");
        }

}


//for letter S

void writeS (int r)
{
    int c;blue();

        for(c=1;c<=9;c++)
        {
          if((r==3||r==4)&&(c<=2)) printf("%c",font_style);
          else if((r==1||r==2||r==8||r==9||r==6||r==5)&&c<=9) printf("%c",font_style);
          else if(r==7&&(c==8||c==9)) printf("%c",font_style);
          else printf(" ");
        }


}

//for letter T

void writeT (int r)
{
    int c;blue();

        for(c=1;c<=9;c++)
        {
         if(r<=2&&c<=9) printf("%c",font_style);
         else if(r<=9&&(c==4||c==5))printf("%c",font_style);
         else printf(" ");
        }


}


//for letter U

void writeU (int r)
{
    int c; purple();

        for(c=1;c<=9;c++)
        {
          if((r<=7)&&(c==1||c==2||c==8||c==9))printf("%c",font_style);
          else if((r==8)&&(c==2||c==3||c==4||c==5||c==6||c==7||c==8)) printf("%c",font_style);
          else if(r==9 &&(c==3||c==4||c==4||c==5||c==6||c==7))  printf("%c",font_style); 
          else printf(" ");
        }
}


//for letter V



void writeV (int r)
{
    int c;green();


        for(c=1;c<=9;c++)
        {
          if((r<=5)&&(c==1||c==2||c==8||c==9)) printf("%c",font_style);
          else if((r==6)&&(c==2||c==3||c==7||c==8)) printf("%c",font_style);
          else if(r==7 &&(c==3||c==4||c==6||c==7)) printf("%c",font_style);
          else if(r==8&&(c==4||c==6)) printf("%c",font_style);
          else if(r==9&&c==5) printf("%c",font_style);
          else printf(" ");
        }


}


//for letter W




void writeW (int r)
{
    int c,i;cyan();

    for(i=1;i<=2;i++)
    {
        for(c=1;c<=9;c++)
        {
          if((r<=7)&&(c==1||c==2||c==8||c==9)) printf("%c",font_style);
          else if((r==8)&&(c==2||c==3||c==4||c==5||c==6||c==7||c==8)) printf("%c",font_style);
          else if(r==9 &&(c==3||c==4||c==4||c==5||c==6||c==7)) printf("%c",font_style);
          else printf(" ");
        }
     }



}

//for letter X

void writeX (int r)
{
    int c;red();

         for(c=1;c<=9;c++)
        {
          if((r==1||r==9)&&(c==1||c==2||c==9)) printf("%c",font_style);
          else if((r==2||r==8)&&(c==2||c==3||c==8||c==9)) printf("%c",font_style);
          else if((r==3||r==7)&&(c==3||c==4||c==7||c==8)) printf("%c",font_style);
          else if((r==4||r==7)&&(c==4||c==3||c==7||c==8)) printf("%c",font_style);
          else if(r==5&&(c==5||c==6)) printf("%c",font_style);
          else if(r==6&&(c==4||c==5||c==6||c==7)) printf("%c",font_style);
          else printf(" ");

      }
}

//for letter Y

void writeY (int r)
{
    int c;purple();

        for(c=1;c<=9;c++)
        {
          if((r==1)&&(c==1||c==9)) printf("%c",font_style);
          else if((r==2)&&(c==2||c==3||c==8||c==9)) printf("%c",font_style);
          else if((r==3)&&(c==3||c==4||c==7||c==8)) printf("%c",font_style);
          else if((r==4)&&(c==4||c==5||c==6||c==7)) printf("%c",font_style);
          else if((r==5||r==6||r==7||r==8||r==9)&&(c==5||c==6)) printf("%c",font_style);
          else printf(" ");

        }
}


//for letter z

void writeZ (int r)
{
    int c;blue();


         for(c=1;c<=9;c++)
        {
          if((r==1||r==2||r==9)&&(c<=9)) printf("%c",font_style);
          else if(r==3 &&(c==7||c==8)) printf("%c",font_style);
          else if(r== 4&&(c==6||c==7)) printf("%c",font_style);
          else if (r==5 &&(c==5||c==6)) printf("%c",font_style);
          else if(r==6 &&(c==4||c==5)) printf("%c",font_style);
          else if(r==7 &&(c==3||c==4)) printf("%c",font_style);
          else if(r==8 &&(c<=9)) printf("%c",font_style);
          else printf(" ");
        }
}

   //for gap

   void writegap(int r)
   {
       int c;

        for(c=1;c<=9;c++)
        {
         printf(" ");
        }
   }

   //INRTO

 void writeintro()

{      printf("\n\n");
       int row,k=0;
     for(row=1;row<=10;row++)
    {
        for(k=1;k<=13;k++)         // this loop print the patteRn horizontally
       {   
           if(k<=2){        printf("      "); writegap(row);}
           else if(k==3){   printf("  ");writeC(row);}
           else if(k==4){   printf("  "); writeO(row);}
           else if(k==5){   printf("  "); writeN(row);}
           else if(k==6){   printf("  "); writeS(row);}
           else if(k==7){   printf("  ");writeO(row);}
           else if(k==8){   printf("  ");writeL(row);}
           else if(k==9){   printf("  ");writeE(row);writegap(row);}
           else if(k==10){  printf("  ");writeP(row);}
           else if(k==11){  printf("  ");writeL(row);}
           else if(k==12){  printf("  ");writeU(row);}
           else if(k==13){  printf("  ");writeS(row);}
       
        }    printf("\n");

    }red();  printf("                                                                                                           ------------(SOURAV  MTE 2K19)------");
      white(); printf("\n                  ----------------------------------------------------------------------------------------------------------------------------------------------------------\n");
}


//   the main function begins here




void main ()
{   int k;
    int row=1;
    char str[1024];
    int check=0;int font;
    //intro part
    writeintro();
    
    printf("\n\n");printf("\033[1;32m");
    printf("please avoid special types of characters ! --[To quit taking input press(>> and enter key]----------------------|\n");
    printf("\033[1;36m"); printf("---------------------------------------------------------------------------------------------|\n");
    start:
    cyan(); printf("font style :  -->BOLD(1)  --> Faded-bold(2)  -->faded(3) --> Arrow-1(4)  -->Arrow-2(5) -->spade(6) --> Diamond(7)  -->wavy(8)");
    green(); printf("\n\nselect the font format:");white(); 
    scanf("%d",&font);
    switch(font)
    {
      case 1: font_style=219;break;
      case 2: font_style=178;break;
      case 3: font_style=176;break;
      case 4: font_style=174;break;
      case 5: font_style=175;break;
      case 6: font_style=6  ;break;
      case 7: font_style=4;  break;
      case 8: font_style=247;break;
      default: font_style=167;break;

    }
     printf("\033[1;33m"); printf("Input the text:\n");white();

    int i=0,nL1=0,nL2=0;;
    char text1[50];
       str[0]=0;
   

   newline1:
   gets(text1);
   nL1=strlen(text1);
   strcat(str,text1);
   nL2=strlen(str);
   str[nL2]='\n';
   str[nL2+1]=0;
   if(text1[nL1-2]=='>'&&text1[nL1-1]=='>')
   {   nL2=strlen(str);
       str[nL2]='\0';
       goto end1;
   }
   goto newline1;
   end1:
   
   
     
   // printf("\n\n");
    newline:
    for(row=1;row<=9;row++)
    {
      for(k=check;str[k]!='\0';k++)         // this loop print the patteRn horizontally
     {
         
        if(str[k]=='A'||str[k]=='a')     { printf("  "); writeA(row);}
        else if(str[k]=='B'||str[k]=='b'){ printf("  "); writeB(row);} 
        else if(str[k]=='C'||str[k]=='c'){ printf("  "); writeC(row);}    
        else if(str[k]=='D'||str[k]=='d'){ printf("  "); writeD(row);}  
        else if(str[k]=='E'||str[k]=='e'){ printf("  "); writeE(row);}
        else if(str[k]=='F'||str[k]=='f'){ printf("  "); writeF(row);}
        else if(str[k]=='G'||str[k]=='g'){ printf("  "); writeG(row);}
        else if(str[k]=='H'||str[k]=='h'){ printf("  "); writeH(row);}
        else if(str[k]=='I'||str[k]=='i'){ printf("  "); writeI(row);}
        else if(str[k]=='J'||str[k]=='j'){ printf("  "); writeJ(row);}
        else if(str[k]=='K'||str[k]=='k'){ printf("  "); writeK(row);}
        else if(str[k]=='L'||str[k]=='l'){ printf("  "); writeL(row);}
        else if(str[k]=='M'||str[k]=='m'){ printf("  "); writeM(row);}
        else if(str[k]=='N'||str[k]=='n'){ printf("  "); writeN(row);}
        else if(str[k]=='O'||str[k]=='o'){ printf("  "); writeO(row);}
        else if(str[k]=='P'||str[k]=='p'){ printf("  "); writeP(row);}
        else if(str[k]=='Q'||str[k]=='q'){ printf("  "); writeQ(row);}
        else if(str[k]=='R'||str[k]=='r'){ printf("  "); writeR(row);}
        else if(str[k]=='S'||str[k]=='s'){ printf("  "); writeS(row);}
        else if(str[k]=='T'||str[k]=='t'){ printf("  "); writeT(row);}
        else if(str[k]=='U'||str[k]=='u'){ printf("  "); writeU(row);}
        else if(str[k]=='V'||str[k]=='v'){ printf("  "); writeV(row);}
        else if(str[k]=='W'||str[k]=='w'){ printf("  "); writeW(row);}
        else if(str[k]=='X'||str[k]=='x'){ printf("  "); writeX(row);}
        else if(str[k]=='Y'||str[k]=='y'){ printf("  "); writeY(row);}
        else if(str[k]=='Z'||str[k]=='z'){ printf("  "); writeZ(row);}
        else if(str[k]==' '){ writegap(row);}
        else if(str[k]=='\n')
       { if(str[k]=='\n'&&row==9){ printf("\n \n \n"); check=k+1; goto newline;}
         else  break;
       }

     }    printf("\n");

     
    } 
    
    check=0;
    nL2=strlen(str);   
    for(i=0;i<=nL2;i++)
   {
       str[i]='\0';
       text1[i]='\0';
   }
     goto start;



}
