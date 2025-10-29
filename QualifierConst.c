#include<stdio.h>

int main()
{
    int iNo1 = 11;
    const int iNo2 = 21;

    //Below lines generates error

    iNo1++;   //iNo1 = iNo1 + 1;
    iNo2++;   //iNo2 = iNo2 + 1;
    iNo2 = 30;       //error

    return 0;
}