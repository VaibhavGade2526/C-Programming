// Assignmnet 34 :- Q1
// write a program which accept strng from user and copy the contents of that string into another string .(Ipemnet stncopy() function)



#include<stdio.h>

void StrNCopy(char * str , char *dest)
{
    while (*str != '\0')
    {
        *dest = *str;
        str++;
        dest++;
    }
    dest = '\0';
    
}
int main()
{
    char Arr[30];
    char Brr[30];

    printf("Enter String:");
    scanf("%[^\n]s",Arr);

    StrNCopy(Arr,Brr);

    printf(" copied string is %s\n",Brr);

    return 0;
}