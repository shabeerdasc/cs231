#include <stdio.h>
 
int main()
{
  int a[100], search, i, n;
 
  printf("Enter the number of elements:\n");
  scanf("%d", &n);
 
  printf("Enter integers:\n");
 
  for (i= 0; i< n; i++)
    scanf("%d", &a[i]);
 
  printf("Enter a number to search:");
  scanf("%d", &search);
 
  for (i = 0; i < n; i++)
  {
    if (a[i] == search)    
    {
      printf(" Found at location %d.\n", i+1);
      break;
    }
  }
  if (i == n)
    printf("%d isn't present in the array.\n", search);
 
  return 0;
}
