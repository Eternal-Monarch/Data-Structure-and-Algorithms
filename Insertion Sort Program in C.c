#include<stdio.h>
int main()
{ int array[]={5,9,88,988,132,221,3,232,44,100,-7};
   int i,j;
   int min_index;
   //outer loop to iterate over all the value
   for(i=0;i<11;i++)//this is the 1st loop
   //this loop read all the number in the array
   //now we have to store the 1st value as a minimum value in the array
   //we have to imagine this is the 1st value the most minimum number in the array
 {

   min_index=i;//first index is the minimum value
   //outer loop to find the new minimum value after the 1st index value
   for(j=i+1;j<11;j++){
    if(array[j]<array[min_index]){
    //now it have to swap
    min_index=j;//update the J
   //store done
    }
   }
   //swap the two numbe
   int temp=array[i];
   array[i]=array[min_index];
    array[min_index]=temp;
 }
 //print the sorted array
    for(i=0;i<11;i++){
   printf("%d  ",array[i]);
    }
    printf("\n\n");

   return 0;

}



