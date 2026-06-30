// Assignment 37 :- Q5
// write aprogram which accept one number from user and toggle contents of first and last nibble 
// of the number . return modified number .(Nibble is a group of four bits).

#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
  UINT iMask = 0xF000000F;
  UINT iAns = 0;

  iAns = iNo & iMask;

  return iAns;
}
int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    iRet = ToggleBit(iValue);

    printf("Updated Number :%d",&iRet);

    return  0;
}