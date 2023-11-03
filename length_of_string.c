#include <stdio.h>

int countlength(char arr[]){
    int count=0;

    for(int i=1; arr[i]!=0 ; i++){
     if(arr[i]==' ')
     {
        continue;
        }
     else
     {
        ++count;
        }
    }
    
    return count;
}

int main() {
    printf("enter the string : ");
     char fullname[200];
     fgets(fullname, 200, stdin);
     countlength(fullname);
     printf("%d", countlength(fullname));
     
     return 0;
}



