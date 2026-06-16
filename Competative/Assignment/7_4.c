// Assignment 7 :- Q3
// Write program to find even factors of given number

#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    for(iCnt=iNo;iCnt>=1;iCnt--)
    {
        if(iCnt%2!=0)
        {
        iFact = iFact*iCnt;
        }
    }
    return iFact;
}
int main()
{

    int iValue = 0;
    int iRet = 0;

    printf("Enter Number:");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Odd Factorial of number is %d",iRet);

    return 0;
}