#include <iostream>
using namespace std;
int Partition(int A[], int j, int i) {
	int p = A[j];
	while (j < i) {
		while (j < i && A[i] >= p) i--;
		A[j] = A[i];
		while (j < i && A[j] <= p) j++;
		A[i] = A[j];
	}
	A[j] = p;

	return j;
}

void QuickSort(int A[], int j, int i) {
	if (j < i) {
		int p = Partition(A, j, i);
		QuickSort(A, j, p - 1);
		QuickSort(A, p + 1, i);
	}
}
int main()
{
	int arr[] = { 34,65,12,43,67,5,78,10,3,70 }, i;
	int len = sizeof(arr) / sizeof(int);
	cout << "原序列:" << endl;
	for (i = 0; i < len; i++)
		cout << arr[i] << ",";
	cout << endl;
	QuickSort(arr, 0, len - 1);
	cout << "排列后:" << endl;
	for (i = 0; i < len; i++)
		cout << arr[i] << ",";
	cout << endl;
	system("pause");
	return 0;
}
