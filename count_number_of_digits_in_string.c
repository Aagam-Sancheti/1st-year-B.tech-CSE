#include<stdio.h>

int main(){
  char name[1000];
  printf("enter the string :");
  fgets(name, 1000, stdin);
  int count=0;

  for(int i=0; name[i]!='\0'; i++ ){
    if(name[i]!=' '){
        count++;
    }
  }
printf("the number of digits in the string is :%d \n", count-1);
    return 0;
}