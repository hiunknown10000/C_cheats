#include <stdio.h>

// int fact(int);

int fact()
{unsigned long long int a=1;
int i;
    printf("\nEnter a number:");
    scanf("%d",&i);
    printf("\t%d!=",i);
   for (i; i>0 ; i--){
// printf("%d\n",i);
a= a*i;

   }
    printf(" %llu",a);

return a;
}

void main(){
    int w,x;
    printf("1.FACTORIAL\n2.PERMUTATION\n3.COMBINATION\n\n ");
    printf("Enter your choise:(1/2/3): ");

    scanf("%d",&w);
    if(w==1)
    x=fact();
    else
    printf("wrong choise");
    // printf("%d",x);
}