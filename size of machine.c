

#include<stdio.h>
union abc
{
    int a;
    char b;
    double c;
    float d;

}s;
int main()
{
    printf("%ld bytes",sizeof(s));
    return 0;

}