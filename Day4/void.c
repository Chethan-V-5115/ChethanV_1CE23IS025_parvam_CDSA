#include<stdio.h>

void myfank();
int main()
{
    printf("Hello World\n");
    myfank();
    printf("Hello World 2\n");
    myfank();
    printf("Hello World 3\n");
    myfank();
    printf("Hello World 4\n");
    myfank();
    return 0;
}
void myfank()
{
    static int x=5;
    printf("%d\n",x);
    x++;
}