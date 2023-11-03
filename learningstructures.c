#include<stdio.h>
#include<string.h>

void CalcSum(struct vector sum[]){
    sum[2].x=sum[0].x +sum[1].x;
    sum[2].y=sum[0].y
}


int main(){
   struct vector{
    
    int x;
    int y;

   };
   
    struct vector sum[3];
 
   printf("enter the first vector : ");
   scanf("%d", &sum[0].x);
   scanf("%d", &sum[0].y);

   printf("enter the second vector : ");
   scanf("%d", &sum[1].x);
   scanf("%d", &sum[1].y);

   struct vector sum[2]={0};

    return 0;
}
 