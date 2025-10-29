#include<stdio.h>

int Addition(int iNo1,int iNo2)
{
    int iSum = 0;
    iSum = iNo1 + iNo2;
    return iSum;
} 

int main()
{
    int iValue1 = 11, iValue2 = 32, iAns = 0;

    iAns = Addition(iValue1,iValue2);
    printf("Addition is : %d\n",iAns);

    return 0;
}