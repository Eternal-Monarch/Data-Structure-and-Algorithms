#include<stdio.h>
int main()
{
int arr[]={1,4,6,7,10,19,22,23,30,35,39,46,49,50,52,55,61,67,70,71};
int i;
int a=4;
int right,left,middle;
left=0;
right=19;
middle=(left+right)/2;
if(arr[middle]==a)
{
printf("item is found at %d\n",middle);
}
else if(arr[middle]>a)
{
middle=left-1;
}
else (arr[middle]<a)
{
middle=right+1;
}
