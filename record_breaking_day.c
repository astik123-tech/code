// problem : Isyana is given the number of visitors at her local theme park on N consecutive days. The number of visitors on the i-th day is V. A day is record-breaking if it satisfies both of the following conditions:

// The number of visitors on the day is strictly larger than the number of visitors on each of the previous days.
// Either it is the last day, or the number of visitors on the day is strictly larger than the number of visitors on the following day.
// Note that the very first day could be a record-breaking day. Please help Isyana find out the number of record-breaking days.

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
