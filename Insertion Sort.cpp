#include<iostream>
using namespace std;


void  Insertion_Sort(int arr[],int size)
{
	int j,key;
	for (int i = 0; i < size; i++)
	{
		 key = arr[i];
		 j = i - 1;
		 while (arr[j]>key & j>=0 )	//shifting elements greater than the key to the right
		 {
			 arr[j + 1] = arr[j];
			 j--;
		 }
		 arr[j + 1] = key;		//put the key in the empty position
	}
}

void printing(int arr[], int size)
{
	for (int i = 0; i <size; i++)
	{
		cout << arr[i];
	}
}

int main()
{
	//test cases:
	//int arr[] = {5,1,9,6,4,3,2,7,8};
	//int arr[] = { 1,3,3,5,2 };
	int arr[] = { 1,2,3,4,5 };

	int size = 5;

	Insertion_Sort(arr,size);
	printing(arr, size);
	

	system("pause");
	return 0;
}