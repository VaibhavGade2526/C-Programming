//Assignment 2:-Q2
// Accept one number from the user and print that number of * on scereen

#include<stdio.h>

void Display(int iNo)
{
    while(iNo>0)
    {
    printf("*");
     iNo--;
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number :");
    scanf("%d",&iValue);
    Display(iValue);

    return 0;
}