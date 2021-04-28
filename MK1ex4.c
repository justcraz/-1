#include <stdio.h>//Підключення бібліотек
#include <math.h>

int main() {
 int x1,x2,y1,y2;


  //Введення чисел

  printf("\nВведіть число x1: ");
  scanf("%d", &x1);

  printf("Введіть число y1: ");
  scanf("%d", &y1);

  printf("\nВведіть число x2: ");
  scanf("%d", &x2);

  printf("\nВведіть число y2: ");
  scanf("%d", &y2);

  //Обчислення
  float a = sqrt(pow(x1-y1,2)+(pow(x2-y2,2)));

  //Результати
  printf("\n*****Результати*****\n");
  printf("Відповідь:");
  printf("a = %.2f", a);
  printf("\n********************\n");

  return 0;
}
