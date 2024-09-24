#include <stdio.h>
#include <locale.h>
void main()
{
	int n;
	setlocale(LC_ALL, "RUS");
	printf("Введите ваше число\n");
	scanf_s("%d", &n);
	int a = n / 100;
	int b = n % 10;
	int c = n / 10 % 10;
	printf("Последняя цифра %d, первая - %d, сумма цифра %d, число наоборот %d%d%d\n", b, a, a + b + c, b, c, a);

}