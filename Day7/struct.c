#include<stdio.h>
struct s1
{
    short a;
    double b;
};

int main()
{
    printf("%d",sizeof(struct s1));
    return 0;
}