
#include <stdio.h>
struct Array {
    int A[20];
    int size;
    int length;
};
void Display(struct Array arr){
    for(int i = 0; i< arr.length ; i++){
        printf("%d ", arr.A[i]);
    }
};
void swap (int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void reverse_array(struct Array *arr){
    int length, i, j;
    i=0;
    j = arr->length-1;
    length  = (arr->length)/2;
    while(i<length){
        swap(&arr->A[i], &arr->A[j]);
        i++;
        j--;
    }
};
int main() {
    struct Array arr = {{5, 8, 9, 4, 6, 1, 2, 3, 7, 8},20, 10};
    Display(arr);
    printf("\n");
    reverse_array(&arr);
    printf("Reversed Array \n");
    Display(arr);
    return 0;
}
