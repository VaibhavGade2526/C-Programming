//Assignment 8:- Q5
//write a program which accept area in squer feet and convert it into squer meter (1 Squer feet = 0.0929 squer meter)

#include<stdio.h>

double SquerMeter(int iNo)
{
    double dAns = 0.0;

    dAns = iNo*0.0929;

    return dAns;

}
int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in squer feet:");
    scanf("%d",&iValue);

    dRet = SquerMeter(iValue);

    printf("Squer meter:%lf",dRet);


    return 0;
}