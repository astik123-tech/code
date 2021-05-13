#include <stdio.h>

int max(int a, int b){
    if(a>b)
        return a;
    else
        return b;
}
int main() {
    int arr[]={9,11,10};
    int size=3, pd, answer=2, current=2, j=2;
    pd = arr[1]-arr[0];
    
    while(j<size){
        if(pd == arr[j]-arr[j-1]){
            current++;
        }else{
            pd = arr[j] - arr[j-1];
        }
        answer = max(answer, current);
        j++;
    }
    printf(" %d ", answer);
    return 0;
}
