// Assignment 30 :- Q3
// write a program which accept string from user and return difference between frequency of small charcter and frequency of captial character


#include<stdio.h>

int Difference(char *str)
{
    int iCaptial = 0;
    int iSmall = 0;

    while (*str!= 0)
    {
        if(*str>='A' && *str<='Z')
        {
            iCaptial++;
        }
        else if(*str>='a' && *str<= 'z')
        {
            iSmall++;
        }
        str++;
    }

    return iCaptial - iSmall;
    
}
int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter string:");
    scanf("%[^\n]s",Arr);

    iRet = Difference(Arr);

    printf("%d",iRet);
    return 0;
}