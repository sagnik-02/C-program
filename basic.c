#include <stdio.h>
int main()
{
    int a,b,c,d;
    
    printf("enter the value of a\n");
    scanf("%d",&a);
    printf("enter the value of b\n");
    scanf("%d",&b);
    c = a+b;
    printf("sumition=%d\n",c);
    c = a-b;
    printf("substraction=%d\n",c);
    d = a*b;
    printf("multiplication=%d\n",c);
    d = a/b;
    printf("division=%d\n",c);
    
    return 0;
}
