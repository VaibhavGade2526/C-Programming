// Assignment  33 :- Q1
// write a program which accept string from user and accept one character . Check whether that character is presenet in string or not 

#include<stdio.h>
#include<stdbool.h>

bool ChkChar(char *str , char ch)
{
    while (*str != '\0')
    {
        if(*str == ch)
        {
            return true;
        }
        str++;
        
      return false;
        
    }
    
}
int main()
{
    char Arr[20];
    char cValue ;
    bool bRet = false;

    printf("enter string:");
    scanf("%[^\n]s",Arr);

    printf("Enter the character: ");
    scanf(" %c",&cValue);

    bRet = ChkChar(Arr,cValue);

    if(bRet == true)
    {
        printf("character found");
    }
    else
    {
        printf("character not found");
    }

    return 0;
}