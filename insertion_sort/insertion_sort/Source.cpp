#include <iostream>

using namespace std;

int main(void)

{

	int arr[64]; cout << "Enter number of elements\n";

	int n, i, j, temp;

	cin >> n; cout << "Enter" << n << "integers"; for (i = 0; i < n; i++)

	{

		cin >> arr[i];

	} for (i = 1; i < n; i++)

		j = i;

	while (j > 0 && arr[j - 1] > arr[j])

		temp = arr[j];

	arr[j] = arr[j - 1];

	arr[j - 1] = temp;

	printf("Sorted list in ascending order:\n");

	for (i = 0; i < n; i++)

	{
		cout << "\n" << arr[i];

	}

	return 0;
}