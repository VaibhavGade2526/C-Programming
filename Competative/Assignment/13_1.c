// Assignmnent 12
// Accept N number from userer and reurn diiference between summation of eve elemets and summation of odd elemets

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iLength)
{
    int iCnt = 0;
    int iSumEven = 0;
    int iSumOdd = 0;

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]%2== 0)
        {
            iSumEven = iSumEven + Arr[iCnt];
        }
        else
        {
            iSumOdd = iSumOdd + Arr[iCnt];
        }
    }
    return (iSumEven-iSumOdd);

}
int main()
{
    int iSize = 0,iRet = 0,iCnt= 0;
    int*p = NULL;

    printf("Enter numbers of elements ");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize*sizeof(int));

    if(p == NULL)
    {
        printf("unable to allocate memoery" );
        return -1;
    }

    printf("Enter %d elements :\n",iSize);

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("Enter elemtns %d:",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Difference(p,iSize);

    printf("Result  is : %d",iRet);

    free(p);

    return 0;
}