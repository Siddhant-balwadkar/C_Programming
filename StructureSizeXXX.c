#include<stdio.h>
#pragma pack(1)

struct Demo
{
    int i;
    char ch1;
    float f;
    char ch2;
    int j;
};

int main()
{
    printf("%lu\n",sizeof(struct Demo));    //14

    return 0;
}
 