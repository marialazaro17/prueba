#include <stdio.h>

int main()
{
  double num = 103.56e10;
  printf("Esto es un número real %f\n", num);
  printf("... en notación científica %e\n", num);
  printf("... y de forma automática %g\n", num);
  return 0;
}

