// Assignment 14 :- Q4
// Aceept N number from user and return and Display all such number which contains 3 digit in it

#include<stdio.h>
#include<stdlib.h>


void Digit(int Arr[],int iLength)
{
    int iCnt = 0;
    int iDigit = 0;

    for(iCnt = 0;iCnt<iLength;iCnt++)
    {
       if((Arr[iCnt]>=100 && Arr[iCnt]<=999)||(Arr[iCnt]<= -100 && Arr[iCnt]>=-999))
       {
        printf("%d\t",Arr[iCnt]);
         
       } 
    }
}
int main()
{

    int iSize = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of Elements:");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize*sizeof(int));

    if( p== NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d Elements\n",iSize);

    for(iCnt<0;iCnt<iSize;iCnt++)
    {
        printf("Enter Element%d:",iCnt+1);
        scanf("%d",&p[iCnt]);

    }

     Digit(p,iSize);

   free(p);

    return 0;

}