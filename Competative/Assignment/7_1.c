// Assignment 7 :-Q1
// write a program whicha accept from ny=umbers and display below pattern 
// Input : 5
// outPut : - * * * * * # # # # #

#include<stdio.h>

void Display(int iNo)
{
       int iCnt = 0;
       int jCnt = 0;
    if(iNo <=0)
    {
        iNo = -iNo;
    }
 

    for(iCnt = 1;iCnt<=2;iCnt++)
    {
      
    for(jCnt = 1;jCnt<=iNo;jCnt++)
    {
       if(iCnt==1)
       {
        printf("*\t");  
       }
       else
       {
          printf("#\t"); 
       }
    }
}
    
}
int main()
{
    int iValue = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}