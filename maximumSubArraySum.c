#include <stdio.h>
#include <limits.h>;
int max(int a, int b){
    if(a > b)
       return a;
    else
       return b;
}
int main() {
    int arr[5] ={-1, 4,-6, 7, -4  };
    int maxSum=INT_MIN;
    int currentSum=0;
    
    for(int i = 0; i<5;i++){
        currentSum += arr[i];
        if(currentSum < 0){
            currentSum = 0;
        }
        maxSum = max(maxSum, currentSum);
    }
    printf("%d", maxSum);

    return 0;
}
