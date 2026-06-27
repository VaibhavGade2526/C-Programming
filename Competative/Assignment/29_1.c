// Assignment :- 29 Q1
// Accept Character from user and check whether it is alphabet or not(A-Z)(a-z)
#include<stdio.h>
#include<stdbool.h>

bool ChAlpha(char ch)
{
       
    if((ch>='A'&& ch<='Z')||(ch>='a'&& ch<='z'))
      {
        return true;
      }
        else
        {
            return false;
        }
    }
int main()
{
    char  cValue = '\0';
    bool bRet = false;

    printf("Enter the character");
    scanf("%c",&cValue);

    bRet = ChAlpha(cValue);

    if(bRet == true)
    {
        printf("It is character ");
    }
    else
    {
        printf("It is not character");
    }

    return 0;
}