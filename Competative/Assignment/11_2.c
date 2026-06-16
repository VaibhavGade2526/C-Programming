// Assignment 11 :-Q2
// write a program which accept number from user and check whether it contains 0 in it or not

#include<stdio.h>
typedef int BOOL;
#define true 1
#define false 0

BOOL ChkZero(int iNo)
{
    int iDigit = 0;
    if(iNo<0)
    {
        iNo -iNo;
    }

    while(iNo!=0)
    {
        iDigit = iNo%10;
        if(iDigit ==0)
        {
            return true;
        }
  
        iNo = iNo/10;
    }
    return false;
}
int main()
{

    int iValue = 0;
    BOOL bRet = false;

    printf("Enter Number:");
    scanf("%d",&iValue);
    
    bRet = ChkZero(iValue);

    if(bRet == true)
    {
       printf("It contians Zero");
    }
    else
    {
        printf("It is not Contians zero");
    }


    return 0;
}