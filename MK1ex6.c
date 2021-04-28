#include <stdio.h>//Підключення бібліотек
#include <math.h>

int main() {
int x,y;

printf("Введіть два числа:\n"); //Введення чисел


printf("\nВведіть число x: ");
scanf("%d", &x);

printf("\nВведіть число y: ");
scanf("%d", &y);


float z=(x-pow(x,0)/pow(x,1)-pow(x,0)-(y-pow(y,0)/pow(y,1)-pow(y,0))); //Обчислення


printf("Відповідь: "); //Виведення результатів
printf("z = %.2f", z);
printf("\n***\n");

return 0;
}
