#include<stdio.h>

int main()
{
    int iValue = 11;
    char cValue = 'M';

    int *iPtr = &iValue;
    char *cPtr = &cValue;

    printf("Size of iPtr is : %lu\n",sizeof(iValue));  //4
    printf("Size of cPtr is : %lu\n",sizeof(cValue));  //1

    //Extra//
    printf("Size of Pointer iPtr is : %lu\n",sizeof(iPtr));  //4
    printf("Size of Pointer cPtr is : %lu\n",sizeof(cPtr));  //4
    //Extra//

    return 0;
}