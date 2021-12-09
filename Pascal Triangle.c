#include <stdio.h>
int factorial(int n) {
    if(n<=1)
        return 1;
    else
        return n*factorial(n-1);
}

int combination(int n,int r) {
   return factorial(n) / ( factorial(n-r) * factorial(r) );
}
int main()
{
   int n, i, j;
   printf("Enter number of row you want to calculate: ");
   scanf("%d",&n);
   n=n-1;
   for(i = 0; i <= n; i++)
    {
      for(j = 0; j <= n-i; j++)
      {
        printf("  ");
      }
      for(j = 0; j <= i; j++)
      {
         printf(" %3d", combination(i, j));
      }
      printf("\n");
    }
   return 0;
}

