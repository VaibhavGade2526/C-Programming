// Assignment 11 :- Q5
// write a program which accept number from user and count frequency of souch a digis which are less than 6

#include<stdio.h>

int Count(int iNo)
{
    int iDigit;
    int iCnt = 0;

    if(iNo<0)
    {
        iNo = -iNo;
    }
    while(iNo!=0)
    {
        iDigit = iNo%10;
        if(iDigit<6)
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
    printf("Enter Number :");
    scanf("%d",&iValue);

    iRet = Count(iValue);
    printf("%d",iRet);

    return 0;
}