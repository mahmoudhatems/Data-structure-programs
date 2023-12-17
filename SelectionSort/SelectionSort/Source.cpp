#include <iostream>
using namespace std;
void selectionSort(int arr[], int size);
void swap(int* a, int* b);
void selectionSort(int arr[], int size);


void insertionSort(int arr[], int n)
{
	int i, key, j;
	for (i = 1; i < n; i++) {
		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}
void selectionSort(int arr[], int size)
{
	int i, j;
	for (i = 0; i < size; i++)
	{
		for (j = i; j < size; j++)
		{
			if (arr[i] > arr[j])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
void swap(int *a, int *b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
	int array[10], i, size;
	cout << "How many numbers you want to sort :";
	cin >> size;
	cout << "\n Enter " << size << "nember\t";
	cout << "\n";
	for (i = 0; i < size; i++)
		cin >> array[i];
	selectionSort(array, size);
	printf("\n sorted array is ");
	for (i = 0; i < size; i++)
		cout << array[i];
	int MHS;
	cin >> MHS;
	return 0;

}