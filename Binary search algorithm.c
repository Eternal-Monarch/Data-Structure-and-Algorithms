#include<stdio.h>
int main()
{
int arr[]={1,4,6,7,10,19,22,23,30,35,39,46,49,50,52,55,61,67,70,71};
int i,a;
printf("enter the number\n");
scanf("%d",&a);
int right,left,middle;
left=0;
right=19;

while(left<=right)//main thing of this code
{
middle=(left+right)/2; 
if(arr[middle]==a)
{
printf("item is found at %d\n",middle+1);
return 0;
}
else if(arr[middle]<a)//if miiddle is less than of a then i donot need to do search the left sided value of array at all.i need to update the left side for that
{
left=middle+1;//updatating the left cursor
}
else 
{
right=middle-1;//no need to use any else if condition,because there is one option is available that should be higher than a then i just need to back from the middle just 1 step behind
}
}
return 0;
}
