#include <stdio.h>

int main()
{
int a,b;

    printf("Enter two number:-\n");
    printf("A =");
    scanf("%d",&a);
    printf("B =");
    scanf("%d",&b);
    // printf("%d,%d",a,b);

    // condition? expression in true : expression in false;

    a>b?printf("A is greater than B"):printf("B is greater than A");

return 0;
}