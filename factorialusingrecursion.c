#include<stdio.h>
int factorial (int n );

int main ()
{
    int n;
printf("enter the number n of which factorial has to be calculated :\n");
scanf("%d",&n);
printf("factorial of given number is : %d", factorial (n));
}
int factorial(int n){
    if (n==1 || n==0)
    {
        return 1;
    }
    int factorialNminus1=factorial(n-1);
    int factorial= factorialNminus1*n;
    return factorial;
}