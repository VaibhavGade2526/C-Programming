// Asssignment 8 :- Q1
// write program which accept radius od circle from user and caclulate it area pi = 3.14

#include<stdio.h>

double CircleArea(float fRadius)
{
    double dArea = 0;
    float pi = 3.14;
     dArea = pi*fRadius*fRadius;
      return dArea;
}
 
int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Radius :");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is %f",dRet);

    return 0;
}