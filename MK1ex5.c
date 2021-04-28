#include <stdio.h>
#include <math.h>


int main() {
  float x, f;

  //Введення даних
  printf("\nВведіть дійсне число x: ");
  scanf("%f", &x);
  //Обчислення
  if (x <= 2) {
    f = pow(x, 2) + 5*x - 6;
    printf("Відповідь: f(x) = %.2f", f);
  }
  else {
    f = fabs(x + cos(x));
    printf("Відповідь: f(x) = %.2f", f);
  }

  return 0;
}
