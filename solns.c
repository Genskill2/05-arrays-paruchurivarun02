/* Enter solutions  */
#include<stdio.h>

int isprime (int);

/* test_max */

int max (int a[], int k)
{
  int max;
  max = a[0];
  for (int i = 0; i < k; i++)
    {
      if (max < a[i])
	{
	  max = a[i];
	}
    }
  return max;
}


/* test_min */

int min (int a[], int k)
{
  int min;
  min = a[0];
  for (int i = 0; i < k; i++)
    {
      if (min > a[i])
	{
	  min = a[i];
	}
    }
  return min;
}


/* test_average */

float average (int a[], int k)
{
  int sum = 0;
  float avg = 0.0;
  for (int i = 0; i < k; i++)
    {
      sum = sum + a[i];
    }
  avg = sum / k;
}


/* test_mode */

int mode (int a[], int k)
{
  int tmax = 0, max_value;
  for (int i = 0; i < k; i++)
    {
      int max = 0;
      for (int j = 0; j < k; j++)
	{
	  if (a[j] == a[i])
	    max++;

	  if (max > tmax)
	    tmax = max;
	  max_value = a[i];
	}
      return max_value;
    }
}


/* test_factors*/

int factors (int n, int a[])
{
  int count = 0;
  int i = 2;
   while (i < n)
    {
      if (n % i == 0)
	if (isprime (i) == 1)
	  {
	    a[count] = i;
	    count++;
	    n = n / i;
	    if (isprime (n) == 1)
	      {
		a[count++] = n;
		break;
	      }
	    i = 2;
	  }
	else
	  continue;
      else
	i++;
    }
  return count;
}


/*prime*/

int isprime (int i)
{
  int flag = 0;
  for (int j = 2; j < i; j++)
    {
      if (i % j == 0)
	{
	  flag = 1;
	  break;
	}
    }
  if (flag == 0)
    return 1;
  else
    return 0;
}
