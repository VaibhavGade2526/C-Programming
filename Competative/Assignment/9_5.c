// Assignment 9 :-Q5
// write program which accept number from user and return diiference betweenm summation od evendigits and summation of oddgitis

#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0;
    int iOddsum = 0;
    int iEvenSum = 0;
    
    if(iNo<0)
    {
        iNo = -iNo;
    }
    while(iNo!=0)
    {
        iDigit = iNo%10;
        if(iDigit%2==0)
        {
            iEvenSum = iEvenSum + iDigit;
        }
        else
        {
            iOddsum = iOddsum + iDigit;
        }
        iNo = iNo/10;
    }
    return (iEvenSum-iOddsum);
}
int main()
{

    int iValue = 0;
    int iRet = 0;

    printf("ENter Number :");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("%d",iRet);

    return 0 ;
}