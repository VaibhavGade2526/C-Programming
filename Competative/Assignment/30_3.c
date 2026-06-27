// Assignment 30 :- Q3
// Accept character from user .If it is captial then Display all the caharacter from the input chracter till Z.
// If Input character is small then print the character in reverse order  till a. In other cases return directly

/*

Input : Q
Output : Q R S T U V W X Y Z
*/

#include<stdio.h>

void Display(char ch)
{
    char i = 0;

   if(ch>='A'&& ch<='Z')
   {
    for ( i = ch; i <= 'Z'; i++)
    {
        printf("%c\t",i);
    }
   }
   else if( ch>='a'&& ch<='z')
   {
    for(i=ch;i<='z';i++)
    {
        printf("%c\t",i);
    }
   }
   else
   {
    printf("%c",ch);
   }

}
int main()
{
    char cValue = 0;

    printf("Enter the character :");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}