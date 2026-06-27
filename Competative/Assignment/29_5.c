// Assignment 29 :- Q5
// Accept division of student from user and depends on the division display exam timing there
// are 4 division in school as A,B,C,D exam of division A at 7 AM, B at 8.30 Am,  A at 9.20 AM 
//and D at 10.30Am (Applicatuon should be case insensitive)

#include<stdio.h>

void DisplaySchedule(char chDiv)
{
    if(chDiv == 'A' || chDiv == 'a')
    {
        printf("your exam at 7:00 AM");
    }
    else if(chDiv == 'B'|| chDiv=='b')
    {
       printf("your exam at 8:30 AM");
    }
    else if(chDiv == 'C'|| chDiv == 'c')
    {
        printf("your exam at 9:20 AM");
    }
    else if (chDiv =='D'|| chDiv == 'd')
    {
        printf("your exam at 10:30 AM");
    }
    else
    {
        printf("Invalid ");
    }
}
int main()
{
    char cValue = '\0';

    printf("Enter your Division :");
    scanf("%c",&cValue);

     DisplaySchedule(cValue);

    return 0 ;
}