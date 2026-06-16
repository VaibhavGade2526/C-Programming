// Assignment 3 :- Q1
// Write a program which accept one number from user and print that number of even number on screen
// Input : 7
// Output : 2 4 6 8 10 12 14

#include<stdio.h>

 void printfEven(int iNo)
{
    int iCnt = 0;
    if(iNo <= 0)
    {
        return;
    }
    // logic 
    while(iCnt <= iNo)
    {
        printf("%d\t",iCnt*2);
        iCnt++;
    }
    
}
int main()
{
    int iValue = 0;

    printf("Enter your Number:\n");
    scanf("%d",&iValue);

    printfEven(iValue);
    return 0 ;
}