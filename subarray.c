// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int array[]={1,2,3};
    int total_sum=0;
    int total=0;
    int size=3;
    
    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++){
            total_sum = total_sum + array[j] + total;
            total = total + array[j];
        }
        total=0;
    }
  printf("Sum of all subarray:  %d ", total_sum);    
    return 0;
}
