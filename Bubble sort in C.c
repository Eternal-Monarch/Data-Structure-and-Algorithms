#include<stdio.h>
int
main ()
{
  int a[] = { 8, 2, 4, 1, 5 };
  int i;
  int j;
  int min_index;
  for (j = 0; j < 5; j++)
    {
      for (i = 0; i < 5; i++)

	if (a[i] > a[i + 1])
	  {
	    int temp = a[i];
	    a[i] = a[i + 1];
	    a[i + 1] = temp;

	  }


    }
  for (j = 0; j < 5; j++)
    {
      printf ("%d\n", a[j]);
    }
  return 0;

}
