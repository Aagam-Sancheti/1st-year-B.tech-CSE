#include<stdio.h>
int main(){
  FILE *fptr;
  fptr= fopen("odd_numbers.txt", "w");
  int k;

  printf("enter the number upto which we want odd numbers to be written in a text file : ");
  scanf("%d", &k);

  for(int i=3 ; i<= k; i++){
  if( i%2!=0){
    fprintf(fptr, "%d \t", i);
  }
  }
fclose(fptr);
    return 0;
}