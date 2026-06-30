// Assignmnet 34 :- Q3
// write a program which accept string from user and copy acaptila chqracter of that string into another string

#include<stdio.h>

 void StrCopyCap(char *str, char *dest)
{
    while (*str != '\0')
    {
        if((*str>='A') && (*str<='Z'))
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
    char Brr[30];  // Empty

    printf("Enter Strig :");
    scanf("%[^\n]s",Arr);

    StrCopyCap(Arr,Brr);

    printf(" Captial character are : %s\n",Brr);

    return 0;
}