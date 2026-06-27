// Assignment :- 31  Q4
// write a program which accept string from user and check whether it contains vowels in it or not

#include<stdio.h>
#include<stdbool.h>

bool ChkVowels(char *str)
{
    while (*str != '\0')
    {
        if(*str=='a'||*str=='i'||*str=='o'||
            *str=='u'||*str=='e'||*str=='A'||
            *str=='I'||*str=='O'||*str=='U'||
            *str=='E')
        {
           return true;
        }
        str++;

    }
    return false;
    
}
int main()
{
    char Arr[20];
    int iRet = 0;


    printf("Enter String:");
    scanf("%[^\n]s",Arr);

    iRet = ChkVowels(Arr);
     
    if(iRet == true)
    {
        printf("Contains Vowel");
    }
    else
    {
        printf("There is no Vowel");
    }

    return 0;

}