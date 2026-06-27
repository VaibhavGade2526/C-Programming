// Assignment 31 :- Q1
//  write a program which accept string from user an count number of  captial characters

#include<stdio.h>

int CountCaptial(char *str)
{
    int iCount = 0;
    
   while(*str !='\0')
    {
        if((*str>='A' ) && (*str<='Z'))
        {
            iCount++;
        }
        str++;
    }
    return iCount++;
}
int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter character:");
    scanf("%[^\n]s",arr);

    iRet = CountCaptial(arr);

    printf("%d\n",iRet);

    return 0;
}