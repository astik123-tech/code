// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int size = 10;
    int find = 20;
    int first, last;
    last = size-1;
    first=0;
    while(first<last){
        if(arr[first] + arr[last] == find){
            printf("%d %d %d",first, last, find);
            break;
        }else if(arr[first] + arr[last] < find){
            first++;
        }else{
            last--;
        }
    }
printf("END");
    return 0;
}
