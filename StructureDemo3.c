#include<stdio.h>

struct demo
{
    int i;
    float f;
    int j;
};

int main()
{
    struct demo obj;
    struct demo *p = &obj;

    p->i = 11;
    p->f = 90.78f;
    p->j = 21;

    printf("%d\n",p->i);   //11 
    printf("%f\n",p->f);   //90.78
    printf("%d\n",p->j);   //21

    return 0;
}