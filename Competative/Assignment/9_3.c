// Assignment 9 :- Q3
// write a program which accept number from user and return thr count of digitsbetween 3 and 7

#include<stdio.h>

int CountRange(int iNo)
{
    int iCnt = 0;
    int iDigit = 0;

    while(iNo!=0)
    {
        iDigit = iNo%10;
        if((iDigit<7)&&(iDigit>3))
        {
            iCnt++;
        }
        iNo = iNo/10;
    }
    return iCnt++;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number:");
    scanf("%d",&iValue);

    iRet = CountRange(iValue);

    printf("%d",iRet);


    return 0;
}