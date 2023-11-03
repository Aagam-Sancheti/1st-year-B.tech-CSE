#include<stdio.h>
int countodd(int arr[],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if( arr[i] %2 != 0){
            count++;
        }
    }
    return count;
}
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
    printf("%d", countodd(arr,n));
}