#include <stdio.h>
struct Array {
  int A[20];
  int size;
  int length;
};
int BinarySearch(struct Array arr, int key){
	int start = 0; 
	int end = arr.length - 1;
	int  mid;
	if(arr.length <=0 ){
		return -1;
	}
	while(start != end){
	mid = (start + end)/2;
        
	if(key==arr.A[mid]){
	    return mid;
	}
  	else if(key>arr.A[mid]){
		start = arr.A[mid] + 1;
	}
	else {
		end = arr.A[mid]-1;
	}
	}
	return -1;
}

int main(){
  struct Array arr={{1,2,3,4,5,16,7,8,9,10}, 20 , 11};
  int result = BinarySearch(arr,6);
  if(result== -1){
      printf("NOT FOUND");
  }else
    printf("At index : %d ", result);
  return 0;
}
