// Assignmement :-Q2
// Accept N Number from user and accept accept RAnge , Display all elemnet fromm that range
#include<stdio.h>
#include<stdlib.h>

int Range(int Arr[],int iLength,int iNo1,int iNo2)
{
    int iCnt = 0;
    int iCount = 0;
    for(iCnt=0;iCnt<iLength; iCnt++)
    {
        if((Arr[iCnt]>=iNo1) &&(Arr[iCnt]<=iNo2))
        {
             iCount++;

        }
    }
    return iCount;
 
}
int main()
{
    int iSize = 0,iCnt = 0,iValue1 = 0,iValue2 = 0,iRet = 0;
    int*p = NULL;

    printf("Enter the enumber of Element:");
    scanf("%d",&iSize);

    printf("Enter the number:");
    scanf("%d",&iValue1);

    printf("Enter the number:");
    scanf("%d",&iValue2);

    p =(int*)malloc(iSize*sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate Memory");
        return -1;
    }

    printf("Enter %d Elements:\n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter  elements%d:",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Range(p,iSize,iValue1,iValue2);

    printf("%d",iRet);

    free(p);


    return  0;
}