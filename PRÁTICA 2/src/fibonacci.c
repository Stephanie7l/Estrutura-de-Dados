#include "../include/fibonacci.h"

int fibonacci_iterativo(int n) 
{
  int fn1 = 1, fn2 = 1, fn = 0, i = 0;
  
  if(n < 3) 
    return (1);

  for(i = 3; i <= n; i++) 
  {
    fn = fn2 + fn1;
    fn2 = fn1;
    fn1 = fn;
  }

  return (fn);
}

int fibonacci_recursivo(int n) 
{
  if(n < 3)
    return (1);
  
  else
    return (fibonacci_recursivo(n - 1) + fibonacci_recursivo(n - 2));
}