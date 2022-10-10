#include<stdio.h>
#include<locale.h>
#include<time.h>
#include<stdlib.h>
int main()
{
	setlocale(0, "");
	int a[25], i, k, p, s;
	srand(time(0));
	printf("введите элементы массива\n");
	for (i = 0; i < 25; i++) {
		a[i] = -50 + rand() % 101;  printf("a[%d]=%d\n", i + 1, a[i]);
	}
	i = 0;
	while (a[i] >= 0) i++;
	printf("первый отрицательный элемент: a[%d]=%d\n", i + 1, a[i]);
	k = 0;
	while (a[k] <= 0) k++;
	printf("первый положительный элемент: a[%d]=%d\n", k + 1, a[k]);
	p = a[i] * a[k];
	s = a[i] + a[k];
	a[i] = p; a[k] = s;
	printf("новый массив:\n");
	for (i = 0; i < 25; i++) {
		printf("a[%d]=", i + 1); printf("%d\n", a[i]);
	}
	return 0;
}
