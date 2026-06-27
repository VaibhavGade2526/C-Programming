// Assignment 30 :- Q2
// Accept number from user . if character is small display its corresponding captil chracter ,
// and if it small then display its corrseponding capti.In other cases display as it is

#include<stdio.h>

void Display(char ch)
{
   if(ch>='A'&& ch<='Z')
   {
    printf("%c\n",ch+32);
   }
   else if(ch>='a'&&ch<='z')
   {
      printf("%c",ch-32);
   }
   else
   {
    printf("%c\n",ch);
   }
}
int main()
{
    char cValue = '\0';

    printf("Enter the character:");
    scanf("%c",&cValue);
    
    Display(cValue);

    return 0;
}