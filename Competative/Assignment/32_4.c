// Assignmnet 32 :- Q4
//  write a program which accept string frm user and Display only digits from that string

#include<stdio.h>

int DisplayDigit(char *str)
{
    while (*str != '\0')
    {
        if(*str>='0' && *str<='9')
        {
            printf("%c",*str);
        }
        str++;
    }

}
int  main()
{
    char Arr[20];

    printf("Enter string:");
    scanf("%[\n]s",Arr);

    DisplayDigit(Arr);

    printf("Digits are: %d",Arr);
    return 0;
}