#include <stdio.h>
#include <limits.h>

int main() {
   int arr[]={1,2,0,7,2,0,2,2};
   int size = 8, max= INT_MIN, i=0;
   while(i<size){
       if(i==0 && arr[i] > arr[i+1]){
            printf(" %d ",arr[i]);
       }
       else 
       if( 
           i != (size-1) && 
           arr[i]>arr[i+1] && arr[i] >max )
        {
            printf(" %d ",arr[i]);
           
       }else if(i==(size-1) && arr[i] >max ){
           printf(" %d ",arr[i]);
       }
       
       if(max<arr[i])
            max=arr[i];
      
       
       i++;
   }
   
    return 0;
}
