// Assignment :- 8 Q2
// write a program which accept width & height of rectangle from user and caculate its area(Area = width*height)

#include<stdio.h>

double RectAre(float fWidth,float fheight)
{
    double dArea = 0.0;

    dArea = fWidth*fheight;

    return dArea;
}
int main()
{
    float fValue1 = 0.0f;
    float fValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter width:");
    scanf("%f",&fValue1);

    printf("Enter Height:");
    scanf("%f",&fValue2);

    dRet = RectAre(fValue1,fValue2);

    printf("Area of Rectangle is%f:",dRet);

    return 0;
}