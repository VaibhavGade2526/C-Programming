// Assignment 3 :- Q5
// Acccept on charetcer from user and check whether that character is vowel (a,e,i,o,u) or not

#include<stdio.h>

typedef int boole;
 
#define true 1
#define false 0

boole CheckVowel(char cValue)
{
    if((cValue == 'a')|| (cValue == 'e') 
     || (cValue == 'i') || (cValue == 'o')
     ||(cValue == 'u')  || ( cValue =='A' )
     || (cValue == 'E') || (cValue == 'I')
     || (cValue ==   'O')  || (cValue == 'U'))
     {
        return true ;

     }
     else
     {
        return false;

     }
}
int main()
{
    char cValue = '\0';
    boole bRet = false;

    printf("Enter chacacter \n");
    scanf("%c",&cValue);

    bRet = CheckVowel(cValue);

    if(bRet == true)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not Vowel");
    }
    return 0;

}