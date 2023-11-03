#include<stdio.h>
int main()
{
    int n;
    printf("enter the number of terms of the array :");
    scanf("%d", &n);

    int arr[n];
    printf("enter the array :");
       for (int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int array[n];
    for(int i=0,j=n-1;i<n,j>=0;i++,j--){
        array[i]=arr[j];
    }
    for(int i=0;i<n;i++){
        printf("%d \t",array[i]);
    }
}