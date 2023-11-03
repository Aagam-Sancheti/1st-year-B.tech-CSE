#include<stdio.h>

int fib(int n){
if (n==0){
return 0;
}
if (n==1){
    return 1;
}

int fibn=fib(n-1)+fib(n-2);
return fibn;
}

int main(){
  
   int n;
   printf("enter the number upto which fibonacci has to be calculated:\n");
   scanf("%d",&n);
    printf("0,");
    printf("1,");
for(int i=2;i<=n;i++){
    printf("%d,", fib(i));
}
}
