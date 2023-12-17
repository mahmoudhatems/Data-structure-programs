#include <iostream>
using namespace std;
int main()
{
	int LA[] = { 1,3,5,7,8 };
	int i, k = 3, j = k, n = 5;
	cout << "The original array elements are :\n";
	for (i = 0; i < n; i++)
	{
		cout << "LA[" << i << "] =" << LA[i] << "\n";
	}
	while (j < n)
	{
		LA[j - 1] = LA[j];
		j = j + 1;
	}
	n = n - 1;
	cout << "The array elements after deletion :\n";
	for (i = 0; i < n; i++)
	{
		cout << "LA[" << i << "]= " << LA[i] << "\n";
	}
}
