#include <iostream>
using namespace std;
int main()
{
	int array[100];
	int i, j, num, temp;
	cout << "Enter the value of num \n";
	cin >> num;
	cout << "Enter the elements one by one \n";
	for (i = 0; i < num; i++)
	{
		cin >> array[i];
	}
	/* Bubble sorting begins */
	for (i = 0; i < num; i++)
	{
		for (j = 0; j < (num - i - 1); j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
	cout << "Sorted array is...\n";
	for (i = 0; i < num; i++)
	{
		cout << array[i] << "\n";
	}
}