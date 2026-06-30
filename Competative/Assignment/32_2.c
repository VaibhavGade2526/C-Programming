// Assignment 32 :- Q2
// Write a program which accept starting from user and convert it into upper case

#include<stdio.h>

int StrUprx(char *str)
{
    while (*str != 0)
    {
        if(*str >= 'a' && *str<='z')
        {
            *str = *str-32;
        }
       str++;
    }
    
}
int main()
{
    char Arr[20];

    printf("Enter String :");
    scanf("%[^\n]s",Arr);

    StrUprx(Arr);

    printf("Modified string is : %s",Arr);

    return 0;
}