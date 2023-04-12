#include "../include/fatorial.h"

int fatorial_iterativo(int n) 
{
  int f = 1;
  
  while(n > 0)
  {
    f = f * n;
    n = n - 1;
  }

  return (f);
}

int fatorial_recursivo(int n) 
{
  if(n == 0)
    return 1;
  
  else
    return (n * fatorial_recursivo(n - 1));
}