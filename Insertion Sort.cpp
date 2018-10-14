//#include<iostream>
//using namespace std;
//int count1 = 0;
//
//void  Insertion_Sort(int arr[],int size)
//{
//	int j,key;
//	for (int i = 0; i < size; i++)
//	{
//		 key = arr[i];
//		 j = i - 1;
//		 while (arr[j]>key & j>=0 )	//shifting elements greater than the key to the right
//		 {
//			 arr[j + 1] = arr[j];
//			 j--;
//			 count1++;
//		 }
//		 arr[j + 1] = key;		//put the key in the empty position
//	}
//	cout << count1<<endl;
//}
//
//void printing(int arr[], int size)
//{
//	for (int i = 0; i <size; i++)
//	{
//		cout << arr[i];
//	}
//}
//
//int main()
//{
//	//test cases:
//	int arr[] = {9,8,7,6,5,4,3,2,1};
//	//int arr[] = { 1,3,3,5,2 };
//	//int arr[] = { 1,2,3,4,5 };
//	//
//	int size = 5;
//
//	Insertion_Sort(arr,size);
//	printing(arr, size);
//	cout << endl << count1;
//
//	system("pause");
//	return 0;
//}