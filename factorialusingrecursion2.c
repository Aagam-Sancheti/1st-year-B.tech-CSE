#include<stdio.h>

int fact(int n)
{
    int ans ;
    if((n==0)||(n==1))
    {
      ans=1;
    }
    else
    {
        ans=n*fact(n-1);
    }
    return ans;
}
int main()
{
   int n;
   printf("enter the number whose factorial we want: ");
   scanf("%d", &n);
   printf("%d ", fact(n));
}