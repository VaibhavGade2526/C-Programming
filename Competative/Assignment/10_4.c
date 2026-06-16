// Assignment 10 :- Q4
//  write a program which accept range from user and return addtion of all even numberdd in between that range ( range should contains postive b=numbers only)

#include<stdio.h>

int RangeSumEven(int iStart,int iEnd)
{
    int iCnt = 0;
    int iSumEven = 0;

    for(iCnt= iStart;iCnt<=iEnd;iCnt++)
    {
        if(iCnt%2==0)
        {
            iSumEven = iSumEven+iCnt;
        }
    }
    return iSumEven;
}
int main()
{

    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter starting point:");
    scanf("%d",&iValue1);

    printf("Enter Ending point:");
    scanf("%d",&iValue2);

    iRet = RangeSumEven(iValue1,iValue2);

    printf("Addition is%d",iRet);

    return 0;
}