#include<stdio.h>
#include<locale.h>
int main()
{
	setlocale(0, "");
	int a[25], i, k, p, s;
	printf("������� �������� �������\n");
	for (i = 0; i < 25; i++) {
		printf("a[%d]=", i + 1); scanf_s("%d", &a[i]);
	}
	i = 0;
	while (a[i] >= 0) i++;
	printf("������ ������������� �������: a[%d]=%d\n", i + 1, a[i]);
	k = 0;
	while (a[k] <= 0) k++;
	printf("������ ������������� �������: a[%d]=%d\n", k + 1, a[k]);
	p = a[i] * a[k];
	s = a[i] + a[k];
	a[i] = p; a[k] = s;
	printf("����� ������:\n");
	for (i = 0; i < 25; i++) {
		printf("a[%d]=", i + 1); printf("%d\n", a[i]);
	}
	return 0;
}
