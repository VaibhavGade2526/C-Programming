// Assignment 8 :- Q3
// write a program which accept distance in kilometer and convert it into meter (1 kiometer = 1000m)

#include<stdio.h>

int KMtoMeter(int iNo)
{
    int km = 0;

    km = iNo*1000;

    return km;
}
int main()
{
    int iValue = 0;

    int iRet = 0;

    printf("Enter distance:");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Meter is :%d",iRet);
    return 0;
}