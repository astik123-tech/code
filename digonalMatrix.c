// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int arr[5][5] = { 0 };
    
    for(int i = 0;i<5;i++){
       for(int j=0;j<5;j++){
           if(j== (i)){
               printf("%d ",i+1);
               continue;
           }
           printf("0 ");
       } 
       printf("\n");
    }
    
    return 0;
}
