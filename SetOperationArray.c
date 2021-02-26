#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int arr[10];
    int length;
    int size;
};
// for Sorted Array
struct Array* InterSection(struct Array arr1, struct Array arr2)
{
    int i, j, k;
    i=j=k=0;
    struct Array *arr3 = (struct Array *) malloc (sizeof(struct Array));
    while (i < arr1.length)
    { 
        if(arr1.arr[i] > arr2.arr[j]){
            j++;
        }else if(arr1.arr[i] < arr2.arr[j] ){
            i++;
        }else if(arr1.arr[i] == arr2.arr[j]){
            arr3->arr[k++] = arr1.arr[i++];
            j++;
        }
    }
    arr3->length = k ;
    arr3->size = 10;
    return arr3; 
}
// for Sorted Array
struct Array * Union (struct Array *arr1, struct Array *arr2){
    int i, j, k;
    i=j=k=0;
    struct Array *arr3 = (struct Array *) malloc ( sizeof(struct Array));
    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->arr[i] < arr2->arr[j])
        {
            arr3->arr[k++] = arr1->arr[i++];
        }else if (arr1->arr[i] == arr2->arr[j])
        {
             arr3->arr[k++] = arr1->arr[i++];
             j++;
        }else if (arr1->arr[i] > arr2->arr[j]){
             arr3->arr[k++] = arr2->arr[j++];
        }
        
        
    }
    while (i < arr1->length)
    {
       arr3->arr[k++] = arr1->arr[i++]; 
    }
    while (j < arr2->length)
    {
       arr3->arr[k++] = arr2->arr[j++]; 
    }
    arr3->length = k;
    arr3->size = 10;
    return arr3;
}

//  sorted array

struct Array * Difference  (struct Array *arr1, struct Array *arr2) {
    int i,j,k;
    i=j=k=0;
    struct Array *arr3 = (struct Array *) malloc (sizeof(struct Array));
    while ( i < arr1->length)
    {
       if (arr1->arr[i] < arr2->arr[j])
       {
            arr3->arr[k++] = arr1->arr[i++];
       }else if(arr1->arr[1] > arr2->arr[j])
       {
           j++;
       }else if (arr1->arr[i] == arr2->arr[j])
       {
           i++,j++;
       }
    }
    
    arr3->length = k;
    arr3->size = 10;
    return arr3; 
}


void Display(struct  Array *arr){
    for (size_t i = 0; i < arr->length; i++)
    {
      printf("%d ", arr->arr[i]);
    }
    
}

int main()
{  
    struct Array arr1 = {{1, 2, 3, 4, 5, 6, 7}, 7, 10};
    struct Array arr2 = {{2, 3, 7, 8, 9, 10, 11}, 7, 10};
    struct Array *arr3;
    arr3 = Difference (&arr1, &arr2);
    Display(arr3);
    return 0;
}
