#include<stdio.h>

/* binsearch: find x in v[0] <= v[1] <= ... <= v[n-1] */
int binsearch(int x, int v[], int n)
{
  int low, high, mid;
  low = 0;
  high = n - 1;
  while (low <= high) {
    mid = (low+high)/2;
    if (x < v[mid])
      high = mid + 1;
    else if (x > v[mid])
      low = mid + 1;
    else /* found match */
      return mid;
  }
  return -1; /* no match */
}

int binsearch2(int x, int v[], int n)
{
  int low, high, mid;
  low = 0;
  high = n - 1;

  mid = (low+high)/2;
  while (low < high && v[mid] != x) {    
    if (x < v[mid])
      high = mid - 1;
    else
      low = mid + 1;    
    mid = (low+high)/2;
  }

  if (x == v[mid])
    return mid;
  else 
    return -1;
}

int main() {
  int v[10] = {1, 2 ,3, 4, 5, 6, 7, 8, 9, 20};
  printf("index %d\n", binsearch(3, v, 10));
  printf("index %d\n", binsearch2(10, v, 10));
  return 0;
}