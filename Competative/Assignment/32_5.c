// Assignment 32 :- Q2
// Write a program which accept starting from user and count number of white space

#include<stdio.h>

int StrUprx(char *str)
{
    int iCOunt = 0;
    while (*str != 0)
    {
        if(*str == ' ')
        {
            iCOunt++;
        }
       str++;
    }
    
    return iCOunt;
}
int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter String :");
    scanf("%[^\n]s",Arr);

   iRet = StrUprx(Arr);

    printf("Modified string is : %d",iRet);

    return 0;
}