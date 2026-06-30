// Assignmnet 38 :- Q3
// write a program accept one number from user and check whether 9 th or 12 th is on off

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

 UINT ChkBit(UINT iNo)
{
    UINT iMask = 0x00000900;
    UINT iAns = 0;

    iAns = iNo & iMask;

    if(iMask == iAns)
    {
        return true ;
    }
    else
    {
       return false;
    }
}
int main()
{
    UINT iValue = 0;
   bool  bRet = 0;
   
   printf("Enter Number:");
   scanf("%d",&iValue);

   bRet = ChkBit(iValue);
   
   if (bRet == true)
   {
     printf("True");
   }
   else
   {
    printf("False");
   }
   



    return 0 ;
}