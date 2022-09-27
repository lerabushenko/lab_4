#include<stdio.h>
#include<locale.h>
#include<conio.h>
int main()
{
	setlocale(0, "rus");
	float a[100], min, max, s, p, c;
	int i, n, b, d;
	printf("введите кол-во элементов массива\n");
	scanf_s("%d", &n);
	printf("введите элементы массива\n");
	for (i = 0; i < n; i++) { printf("a[%d]=", i + 1); scanf_s("%f", &a[i]); }
	min = a[1]; 
	for (i = 0; i < n; i++) {
		if (min > a[i]) { min = a[i]; b = i; }
	}
	max = a[1]; 
	for (i = 0; i < n; i++) {
		if (max < a[i]) { max = a[i]; d = i; }
	}
	c = min; a[b] = max, a[d] = c;
	printf("новый массив\n");
	for (i = 0; i < n; i++)  printf("a[%d]= %.2f\n", i + 1, a[i]);
	s = 0;
	for (i = 0; i < n; i++) s = s + a[i];
	printf("сумма = %.2f\n", s);
	p = 1;
	for (i = 0; i < n; i++) p = p * a[i];
	printf("произведение = %.2f\n", p);
	return 0;
}
