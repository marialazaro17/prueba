#include <stdio.h>

int main()
{
  double num = 103.56e10;
  printf("Esto es un n�mero real %f\n", num);
  printf("... en notaci�n cient�fica %e\n", num);
  printf("... y de forma autom�tica %g\n", num);
  return 0;
}

