//Assignment 4 :- Q5
// write a program accept number from user and return diiference between summation of all its factors and non factors;

#include<stdio.h>


int FactDiff(int iNo)
{

    int iCnt = 1;
    int iFactSum = 0;
    int iNonFactSum = 0;

    for(iCnt = 1; iCnt<iNo;iCnt++)
    {
        if(iNo%iCnt==0)
        {
          iFactSum = iFactSum+iCnt;
        }
        else
        {
            iNonFactSum = iNonFactSum+iCnt;
        }
    }
    return (iFactSum-iNonFactSum);
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d",iRet);

    return 0;
}