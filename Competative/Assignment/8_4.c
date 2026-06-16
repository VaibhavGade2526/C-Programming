// Assignment 8:- Q4
// write a program which accept tempersture in Fahrenheit and convertit into celsius (1 celsius = (Fahrenheit-32)*(5/9))

#include<stdio.h>

double FhtoCs(float fTemp)
{
    double dCs = 0.0;
    dCs = (fTemp-32)*(5.0/9.0);

    return dCs;
}
int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit:");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Temerature in Celsius is:%f",dRet);

    return 0;
}