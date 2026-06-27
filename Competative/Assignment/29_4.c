// Assignment :- 29 :-Q4
// Accept Character from user and check whether it is small case or not(a-z)
#include<stdio.h>
#include<stdbool.h>

bool ChkDigit(char ch)
{
       
    if((ch>='a' && ch<='z'))
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

    printf("Enter the character:");
    scanf("%c",&cValue);

    bRet = ChkDigit(cValue);

    if(bRet == true)
    {
        printf("It is  Small case character ");
    }
    else
    {
        printf("It is not small case character");
    }
    return 0;
}