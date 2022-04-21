#include <stdio.h>
int main()
{
    int a,b,c;
    printf("plase enter no a:");
    scanf("%i",&a);
    printf("plase enter no b:");
    scanf("%i",&b);
    c=a;
    a=b;
    b=c;
    printf("a=%i,b=%i",a,b);
    return 0;
}