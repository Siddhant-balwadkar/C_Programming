#include<stdio.h>

int main()
{
    int value1 = 0, Value2 = 0, Ans = 0;

    printf("Enter first number : \n");
    scanf("%d",&value1);

    printf("Enter second number : \n");
    scanf("%d",&Value2);

    Ans = value1 + Value2;

    printf("Addition of : %d\n",Ans);

    return 0;
}