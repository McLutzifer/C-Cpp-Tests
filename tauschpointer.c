#include <stdio.h>

void tausche( int *a, int *b)
{
  int t;

  t = *a;
  *a = *b;
  *b = t;
}

int main()
{
  int x= 1;
  int y = 2;
  printf("Vorher: %d %d\n", x, y);
  tausche( &x, &y);
  printf("Nachher: %d %d\n", x, y);

  return 0;
}