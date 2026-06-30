// Assigment 38 :- Q2
// Write a program which accept two number from user and display postion of comman ON bits from that two numbers

#include<stdio.h>

typedef unsigned int UINT;

UINT CommonBits(UINT iNo1, UINT iNo2)
{
    UINT iPos = 1;
    UINT iResult = 0;

    iResult = iNo1 & iNo2;

    while (iResult != 0)
    {
        if ((iResult & 1) == 1)
        {
          printf("%d ",iPos);
        }

        iResult = iResult >> 1;
        iPos++;
        
    } 
    
}
int main()
{
    UINT iValue1 = 0;
    UINT iValue2 = 0;

    UINT iRet = 0;

    printf("Enter 1 St Number :");
    scanf("%d",&iValue1);

    printf("Enter 2nd  Number :");
    scanf("%d",&iValue2);

     CommonBits(iValue1,iValue2);
    return 0;
}