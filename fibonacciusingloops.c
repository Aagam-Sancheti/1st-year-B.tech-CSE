#include<stdio.h>

int main()
{
    int n;
    printf("enter the number of terms n upto which fibonacci series has to be calculated :\n");
    scanf("%d",&n);
   int first=0;
   int second=1;
   printf("%d,%d,",first,second);
int sum=0;
    for(int i=1;i<=n;i++){
        sum=first+second;
        printf("%d,",sum);
        first=second;
        second=sum;
    }
return 0;
}

 

