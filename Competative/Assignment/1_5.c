// Assignment 1:-Q5
// Accept one number from user and print that number of on Screen.

#include<stdio.h>

void Accept(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt<=iNo;iCnt++)
    {
        printf("*\n");

    }
}
int main()
{
    int ivalue = 0;
    ivalue = 5;
    Accept(ivalue);

    return 0;
}