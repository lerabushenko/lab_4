#include<stdio.h>
#include<locale.h>
int main()
{
	setlocale(0, "");
	float a[100];
	int i, n, k;
	printf("������� ���-�� ��������� �������\n");
	scanf_s("%d", &n);
	printf("������� �������� �������\n");
	for (i = 0; i < n; i++) { printf("a[%d]=", i + 1); scanf_s("%f", &a[i]); }
	k = 0;
	for (i = 0; i < n - 1; i++) { if (a[i] * a[i + 1] == 1) k++; }
	printf("���������� �������� �� ��������������� �����: %d", k);
	return 0;
}
