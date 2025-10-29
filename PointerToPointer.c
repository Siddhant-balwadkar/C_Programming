#include<stdio.h>

int main()
{
    int no = 11;

    int *p = &no;
    int **q = &p;
    int ***r = &q;
    int ****s = &r;
    int *****t = &s;

    printf("%d\n",no);
    printf("%d\n",*p);
    printf("%d\n",**q);
    printf("%d\n",***r);
    printf("%d\n",****s);
    printf("%d\n",*****t);

    //Extra//
    printf("Size of *p is : %lu\n",sizeof(p));
    printf("Size of *q is : %lu\n",sizeof(q));
    printf("Size of *r is : %lu\n",sizeof(r));
    printf("Size of *s is : %lu\n",sizeof(s));
    printf("Size of *t is : %lu\n",sizeof(t));
    //Extra//

    return 0;
}