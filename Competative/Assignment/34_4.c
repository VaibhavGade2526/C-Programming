// Assignment 34 :- Q4
// write a program which accept string from user aand copy small cgaracter of thqt string into another string

#include<stdio.h>

void StrCopySmall(char *str, char *dest)
{
    while (*str != 0)
    {
        if((*str>='a') && (*str <= 'z'))
        {
           *dest = *str;
           dest++;
        }
        str++;
    }
    *dest = '\0';
}
int main()
{

    char Arr[30];
    char Brr[30];

    printf("ENter String:");
    scanf("%[^\n]S",Arr);

    StrCopySmall(Arr, Brr);

    printf(" small character are : %s\n",Brr);

    return 0 ;
}