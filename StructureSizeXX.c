#include<stdio.h>

struct Demo
{
    int i;
    char ch1;
    char ch2;
    float f;
    int j;
};

int main()
{
    printf("%lu\n",sizeof(struct Demo));  //16 because char data are allign in sequnce

    return 0;
}