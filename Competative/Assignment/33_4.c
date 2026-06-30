// Assignment:- 33 Q3
// write a program which accept string from user and accept one character . return index of last occurrence of that character

#include<stdio.h>

int CountChar(char *str,char ch)
{
    int iCount = 0;
    int iPos = -1;
    while (*str != 0)
    {
        if(*str == ch)
        {
            iPos = iCount;
        }
        str++;
        iCount++;
    }
    return iPos;

    
}
int main()
{
    char Arr[20];
    char cValue ;
    int iRet = 0;

    printf("Enter String :");
    scanf("%[^\n]s",Arr);

    printf("Enter the character:");
    scanf(" %c",&cValue);

    iRet = CountChar(Arr,cValue);

    printf("character Location is %d",iRet);

    return 0;
}