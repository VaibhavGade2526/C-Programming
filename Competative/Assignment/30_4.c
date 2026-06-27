// Assignmnet 30 :- Q4
// Accept character from user and check whether it is special symbola or not (!,@,#,$,%,^,&,*)
/*

Input = %
Output = true

*/

#include<stdio.h>
#include<stdbool.h>

bool ChkSpecial(char ch)
{
    if(ch == '!'||ch == '@' || ch == '#'|| ch == '$'||ch=='%'||ch == '^'||ch == '&'|| ch == '*')
    {
        return true;
    }
    else
    {
        return false;
    }

}
int main()
{

    char cValue = 0;
    bool bRet = false;

    printf("Enter  the character:-");
    scanf("%c",&cValue);

    bRet = ChkSpecial(cValue);

    if(bRet == true)
    {
        printf("It is Special character");
    }
    else
    {
        printf("It is not Special character");
    }

    return  0;
}