#include<stdio.h>

int main ()
{
int n;
printf("enter the number n of which factorial has to be calculated :\n");
scanf("%d",&n);
int factorial=1;
for (int i =n;i>=1;i--){
factorial= factorial*i;
}
printf("the factorial of the given number is :%d \n" , factorial);

return 0;
}