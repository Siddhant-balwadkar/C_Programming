#include<stdio.h>

int iMarks = 89;

int main()
{
    char cValue = 's';
    int iValue = 11;
    float fValue = 90.78f;
    double dValue = 98.564323;
    
    printf("Size of character is : %lu\n",sizeof(cValue)); //1
    printf("Size of integer is : %lu\n",sizeof(iValue));  //4
    printf("Size of float is : %lu\n",sizeof(fValue));  //4 
    printf("Size of double is : %lu\n",sizeof(dValue));  //8

    printf("Address of cValue is : %lu\n",&cValue);
    printf("Address of iValue is : %lu\n",&iValue);
    printf("Address of fValue is : %lu\n",&fValue);
    printf("Address of dValue is : %lu\n",&dValue);

    return 0;
}