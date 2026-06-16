// Assignment 5 :- Q3
// Write a program accept from user and pritn its numbers line Inputs

#include<stdio.h>

int Display(int iNo)
{
    int iCnt = 0;

    for(iCnt= -iNo;iCnt<=iNo;iCnt++)
    {
        printf("%d\t",iCnt);
    }

}
int main()
{
    int iValue = 0;

    printf("Enter Numbers:");
    scanf("%d",&iValue);

    Display(iValue);


    return 0;
}