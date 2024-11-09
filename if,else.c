#include<stdio.h>
int main()
{
  int a;
  printf ("enter the no\n");
    scanf("%d",&a);
 //(a%2==0)? (printf("yes it's even \n")) : ((printf("is not even")));
  
 /* if (a%2==0)
   printf("yes it's even \n");
  else
    printf("is not even\n");*/

      
if (a%2)
   printf(" it's not even \n");
  else
     printf("yes it's even \n"); 
}
