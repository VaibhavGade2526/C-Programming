// Assignment :- 29 :-Q3
// Accept Character from user and check whether it is digit or not (0-9)
#include<stdio.h>
#include<stdbool.h>

bool ChkDigit(char ch)
{
       
    if((ch>=0 && ch<=9))
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
    scanf("%d",&cValue);

    bRet = ChkDigit(cValue);

    if(bRet == true)
    {
        printf("It is Digit ");
    }
    else
    {
        printf("It is not Digit");
    }
    return 0;
}