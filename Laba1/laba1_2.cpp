#include <iostream>

using namespace std;
#define PR(x) printf ("x=%u, *x=%c, &x=%u\n",x,*x,&x)
#include <stdio.h>
int main(void)
{
    char mas[]={'a', 'b', 'c'};
    char *ptr1, *ptr2;
    ptr1=mas;
    ptr2=&mas[2];
    PR(ptr1);
    ptr1++;
    PR(ptr1);
    PR(ptr2);
    ++ptr2;
    printf("ptr2-ptr1=%u\n", ptr2-ptr1);
}