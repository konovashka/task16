/*Дан целочисленный массив а, состоящий из n элементов, и целое число М.
Найти элемент, который ближе всего к М. Выдать значение этого элемента и
его индекс. Предполагается, что такой элемент единственный.*/
#include <iostream>
using namespace std;

int main()
{
	int n,m;
	printf("vvedite razmer\n");
	scanf_s("%d", &n);
	int* arr = new int[n];
	printf("zapolnite massiv\n");
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	int min = INT_MAX,raz,ans,number;
	printf("vvedite M\n");
	scanf_s("%d", &m);
	for (int i = 0; i < n; i++)
	{
		raz = 0;
		if (arr[i] < m)
		{
			raz = m - arr[i];
		}
		if (arr[i] > m)
		{
			raz =arr[i] - m ;
		}
		if (raz<min)
		{
			min = raz;
			ans = arr[i];
			number = i;
		}
	}
	printf("%d %d", ans, number);
}