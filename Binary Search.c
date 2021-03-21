#include<stdio.h>
int
main () 
{
  int a, b, c, d;
  
int position;
  
int number;
  
int search;
  
int middle;
  
//int last=number-1;
  int i;
  
printf ("Enter The Number: \n");
  
scanf ("%d", &number);
  
int arr[number];
  
int first = 0;
  
int last = number - 1;
  
printf ("Enter %d times number sequnncewise\n", number);
  
for (i = 0; i < number; i++)
    
    {
      
scanf ("%d", &arr[i]);
    
}
  
printf ("which number u want to find out\n");
  
scanf ("%d", &search);
  
printf ("number is searching.....\n");
  
middle = (first + last) / 2;
  
//for(i=0;i<number;i++)
    if (search == arr[middle])
    
    {
      
printf
	("number is found in the postion of array in the postion of %d\n",
	 middle + 1);
      
return 0;		//if number is found then the code will be end here
//thats why we type return here
    }
  
if (search > arr[middle])
    
for (i = middle; i <= number; i++)
      
if (search == arr[i])
	
	{
	  
printf
	    ("number is found in the postion of array in the postion of %d\n",
	     i + 1);
	  
return 0;
	
}
  
if (search < arr[middle])
    
for (i = first; i <= middle; i++)
      
if (search == arr[i])
	
	{
	  
printf
	    ("number is found in the postion of array in the postion of %d\n",
	     i + 1);
	  
return 0;
	
}
  
printf ("the number is not found\n");
  
return 0;

}


 
