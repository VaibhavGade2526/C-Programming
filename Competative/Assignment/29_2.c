// Assignment :- 29 :-Q2
// Accept Character from user and check whether it is captil or not(A-Z)
#include<stdio.h>
#include<stdbool.h>

bool ChkCaptil(char ch)
{
       
    if((ch>='A'&& ch<='Z'))
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

    bRet = ChkCaptil(cValue);

    if(bRet == true)
    {
        printf("It is  Captial character ");
    }
    else
    {
        printf("It is not Captial character");
    }
    return 0;
}