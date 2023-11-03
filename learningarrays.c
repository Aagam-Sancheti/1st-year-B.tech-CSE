#include<stdio.h>

int main(){
 int n;
 printf("enter the number of terms of the array :");
 scanf("%d",&n);
 int marks[n];
 printf("enter the terms of the array :");
 for(int i=0;i<n;i++){
    scanf("%d",&marks[i]);  
 }
 printf("the elements of the array are :");

 for(int i=0;i<n;i++){
printf("%d, \n", marks[i]);
 }
    return 0;  
}
