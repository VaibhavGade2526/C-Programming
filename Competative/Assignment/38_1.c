// Assignment 38 :- Q1
// write a program which accept one number from user and count number of ON(1) bits in it without using % d and / opertor.


#include<stdio.h>
typedef unsigned int UINT;

UINT CountOne(UINT iNo)
{
    int iCount = 0;
    while (iNo != 0)
    {
        if(iNo & 1 == 1) 
        {
            iCount++;
        }
        iNo = iNo>>1;
    }
    return iCount;
    
}
int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter Number:");
    scanf("%d",&iValue);

    iRet = CountOne(iValue);

    printf("Number of 1' :%d",iRet);



    return 0;
}