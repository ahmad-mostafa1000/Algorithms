#include<iostream>
using namespace std;
const int max_size = 10000;//avoid initialization error

void  Merge(int arr[max_size], int start,int end,int mid)
{
	int nl = mid - start+1;
	int nr = end-mid;
	int L[max_size] ;
	int R[max_size] ;


	for (int i = 0; i < nl; i++)
		L[i] = arr[start+i]; //start+i: to start looping from target index

	for (int j = 0;j < nr; j++)
		R[j] = arr[mid+j+1];

	int i = 0, j = 0, k = start;//k=start: to accumulate int the 'arr' without override

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
	if (end > start)
	{
		int mid = (end +start )/ 2;

		Merge_Sort(arr, start, mid );
		Merge_Sort(arr, mid+1, end);
		Merge(arr, start, end, mid);
	}
	//return;
}
void printing(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i];
	}
}
int main()
{
	//test cases:
	int arr[] = { 9,8,7,6,5,4,3,2,1 };
	//int arr[] = { 1,3,3,5,2 };
	//int arr[] = { 1,2,3,4,5 };
	//
	int arr_size = sizeof(arr) / sizeof(arr[0]); 
	Merge_Sort(arr, 0, arr_size-1);
	printing(arr, arr_size);
	
	system("pause");
	return 0;
}