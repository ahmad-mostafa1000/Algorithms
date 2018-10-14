#include<iostream>
using namespace std;
const int max_size = 10000;

void  Merge(int *arr,int *L,int *R, int nl,int nr)
{
	int i = 0, j = 0, k = 0;

	int *L = new int[nl];
	int *R = new int[nr];
	for (int i = 0; i < nl; i++)
		L[i] = arr[i];

	for (int j = 0;j < nr; j++)
		R[j - m] = arr[j];

	while (i < nl &&j < nr)
	{
		if(L[i] < R[j])
		{
			arr[k] = L[i];
			i++;
		}
		else
		{
			arr[k] = R[j];
			j++;
		}
		k++;
	 }

	while (i < nl)
	{
		arr[k] = L[i];
		i++;
		k++;
	}
	while (j < nr)
	{
		arr[k] = R[j];
		j++;
		k++;
	}
}

void Merge_Sort(int arr[], int start,int end)
{
	if ((end - start) < 2) return;
	int m = (end-start) / 2;

	

	Merge_Sort(arr,start,m-1);
	Merge_Sort(arr, m,end);
	Merge(arr, );

}

int main()
{
	//test cases:
	int arr[] = { 9,8,7,6,5,4,3,2,1 };
	//int arr[] = { 1,3,3,5,2 };
	//int arr[] = { 1,2,3,4,5 };
	//
	int size = 10;
	Merge_Sort(arr, size);

	system("pause");
	return 0;
}