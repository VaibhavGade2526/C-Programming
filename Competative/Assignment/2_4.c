// Assignment 2 :- Q4
// Accept two number from the user and Display first number second number of times

// Input : 12 5
// output : 12 12 12 12 12

//Input : -2 3
// Output  -2 -2 -2 

// Input : 21 -3
// Output : 21 21 21

#include<stdio.h>

void Display(int iNo,int iFrequency)
{
    int iCnt = 0;

    if(iFrequency<0)
    {
        iFrequency = - iFrequency;
    }
    for(iCnt = 1;iCnt<=iFrequency;iCnt++)
    {
        printf("%d\t",iNo);
    }

}
int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    printf("ENter frequency:");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;
}