#include <stdlib.h>
#include <stdio.h>

int main()
{
  int a, b, c;

  puts("Enter two numbers A and B");
  scanf("%d %d[^\n]");

  c = a + b;
  printf("Sum of A=%d and B=%d is: %d", a, b, c);

  return EXIT_SUCCESS;
}