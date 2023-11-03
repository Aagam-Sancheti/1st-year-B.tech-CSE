#include<stdio.h>

int gcd(int n , int m )
{
    int ans;
    if(n%m==0)
    {
        ans=m;
    }
    else
    {
      ans= gcd(n,n%m);
    }
    return ans;
}

int main()
{
   int n,m;
   printf("enter two numbers : ");
   scanf("%d%d", &n, &m);
   if(n>m){}
   else{
    int temp;
    temp=n;
    n=m;
    m=temp;
   }
   printf("%d",gcd(n,m));
}