// Assignment 32 :- Q1
// Write a program which accept starting from user and toggle  the case 

#include<stdio.h>

 int StrToggle(char *str)
{
    while (*str != 0)
    {
        if(*str>='A' && *str<='Z')
        {
            *str = *str + 32;
        }
         else if(*str>='a' && *str<='z')
        {
            *str = *str - 32;
        }
        str++;
    }
        
    }
    
int main()
{
    char Arr[20];

    printf("Enter Stirng:");
    scanf("%[^\n]s",Arr);

    StrToggle(Arr);

    printf("Modified string is %s",Arr);
}