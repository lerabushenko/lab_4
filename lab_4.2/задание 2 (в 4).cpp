#include<stdio.h>
#include<locale.h>
#include<conio.h>
int main()
{
	setlocale(0, "");
	float a[100], max, p;
	int i, n, b, c, d;
	printf("введите кол-во элементов массива\n");
	scanf_s("%d", &n);
	printf("введите элементы массива\n");
	for (i = 0; i < n; i++) { printf("a[%d]=", i + 1); scanf_s("%f", &a[i]); }
	max = a[0];
	b = 0;
	for (i = 0; i < n; i++) {
		if (max < a[i]) { max = a[i]; b = i + 1; }
	}
	printf("максимум = %.2f\n", max);
	printf("номер максимума: %d\n", b);  		i = 0;  c = 0; d = 0;
	while (a[i] != 0) i++; c = i;  		i = c + 1;
	while (i > c && a[i] != 0) i++; d = i;    		p = 1;
	for (i = c + 1; i > c && i < d; i++) p = p * a[i];
	printf("произведение: %.2f", p);
	return 0;
}
