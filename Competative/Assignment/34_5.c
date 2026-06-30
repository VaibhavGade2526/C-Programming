// Assignmnet 34 :- Q5
// write a program which accept 2 string fom user and contact second string after first string ,(Implement strcat()function)

#include<stdio.h>

void StrCat(char *str , char *dest)
{
    
    while (*str != '\0')
    {
        str++;
    }

    while (*dest != '\0')
    {
        *str = *dest;
        str++;
        dest++;
    }
    *str = '\0';
    
    
}
int main()
{
    char Arr[50];
    char Brr[30];

    printf("Enter 1 st String :");
    scanf("%[^\n]s",Arr);

    getchar();  // consume newline

    printf("Enter 2nd String :");
    scanf("%[^\n]s",Brr);

    StrCat(Arr,Brr);

    printf("comiine String : %s\n",Arr);


    return 0;
}