// Assignment 2 :-Q2
//Accept on Number from user if number is less than 0 then pint "hello" otherwise print "Demo".

#include<stdio.h>

void Display(int iNo)
{
   if(iNo<10)
   {
    printf("Hello");
   }
   else
   {
    printf("Demo");

   }
   
}
int main()
{
    int iValue = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    Display(iValue);


    return 0;
}