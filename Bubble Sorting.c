#include<stdio.h>
int 
main () 
{
  
int array[] = { 2, 11, 17, 8, 9, 15, 18 };	//size==7
  int i, j;
  
    //inner loop
    //To iterate all the number in the array
    for (i = 0; i < 7; i++)	//loop running done
    //nested for loop
    //outer loop
    {
      
for (j = 0; j < 7; j++)
	
	{
	  
if (array[j] > array[j + 1])
	    
	    {
	      
		//array[j]=array[j+1];
	      
int temp = array[j];
	      
array[j] = array[j + 1];	//a==b
	      array[j + 1] = temp;	//b==temp
	    }
    
} 
} 
printf ("after the sorting\n");
  
for (i = 0; i < 7; i++)
    
    {
      
printf ("%d ", array[i]);
    
}
  
printf ("\n\n");
  
return 0;

 
}


 
 
 
 
 
