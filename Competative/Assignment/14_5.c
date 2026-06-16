// Assignment 14 :- Q5
// Aceept N number from user and return  frquencys 11 fromon it;

#include<stdio.h>
#include<stdlib.h>


int Frequency(int Arr[],int iLength,int iNo)
{
    int iCnt = 0;
    int iFrequency = 0;

    for(iCnt = 0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
           iFrequency++;
        }
    }
    return iFrequency;

}
int main()
{

    int iSize = 0, iCnt = 0 ,iValue = 0;
    int iRet = 0;
    int *p = NULL;

    printf("Enter number of Elements:");
    scanf("%d",&iSize);

    printf("Enter the Number :");
    scanf("%d",&iValue);

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

    iRet = Frequency(p,iSize,iValue);

    printf(" Frequency is %d",iRet);

   free(p);

    return 0;

}