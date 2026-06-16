//Assignment 6 :- Q1
// write program accept number from user and if number is lees than 50 then print small ,id=f is greater than 50 and less than 100 then printf mediam ,if it is grater than 100 then printf large

#include<stdio.h>

void Number(int iNo)
{

    if(iNo<50)
    {
        printf("Small");
    }
    else if ((iNo>50)&&(iNo<100))
    {
        printf("Mediam");
    }
     else if (iNo>100)
    {
        printf("large");
    } 
}
int main()
{

    int iValue = 0;

    printf("Enter Number:");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}