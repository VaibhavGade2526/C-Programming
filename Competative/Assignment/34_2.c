// Assignmnet 34 :- Q2
// write a program wich accept string from user and copy the comtemts of that string into another string .(Impleement strcopy() function)

#include<stdio.h>

void StrNCopy(char *str, char *dest ,int iCnt )
{
    while( *str != '\0' && (iCnt != 0))
    {
        *dest = *str;
        str++;
        dest++;
        iCnt--;
    }
    *dest = '\0';
    
}
int main() 
{

    char Arr[30];
    char Brr[30];  // Empty String
    int iValue = 0;

    printf("Enter String \n :");
    scanf("%[^\n]s",Arr);

    printf("Enter number of character to copy :");
    scanf("%d",&iValue);

    StrNCopy(Arr,Brr,iValue);
    printf("%s",Brr);
    return 0;
}