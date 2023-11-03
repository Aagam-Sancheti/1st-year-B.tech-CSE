#include<stdio.h>

int main(){
    char name[1000];
    printf("enter the string quickly: ");

fgets(name, 200, stdin);

int n,m;
printf("enter the slicing parameters n and m : ");
scanf("%d%d", &n,&m);
for(int i=n ; i<=m;i++){
     printf("%c", name[i]);
}
    return 0;
}