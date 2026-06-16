// Assignment 10 :- Q3;
// write program which accept range from user and return addition of all numbers in between that range (range should contains postive numbers only)

#include<stdio.h>

int RangeSum(int iStart,int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt=iStart;iCnt<=iEnd;iCnt++)
    {
        iSum = iSum+iCnt;

    }
    return iSum;
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;


    printf("Enter strting point:");
    scanf("%d",&iValue1);
    
    printf("Enter Ending point:");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1,iValue2);

    printf("Addition Is %d",iRet);



    return 0;
}