#include<stdio.h>
int
main ()
{
  int arr[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
  int i, a, b, c, d, e, pos = -1;
  printf ("enter the number\n ");
  scanf ("%d", &a);
  for (i = 0; i < 10; i++)
    {
      if (arr[i] == a)
	{
	  pos = i + 1;
	  break;

	}
    }
  if (pos == -1)
    {
      printf ("not found");

    }
  else
    {
      printf ("found at the position of %d", pos);

    }
  return 0;
}
