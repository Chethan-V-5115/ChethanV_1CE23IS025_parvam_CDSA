#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a=0,b=0;
    float c=0,d=0;

    scanf("%d%d",&a,&b);
    scanf("%f%f",&c,&d);

    printf("%d %d",(a+b),(a-b));
    printf("\n");
    printf("%.1f %.1f",(c+d),(c-d));

    return 0;
}