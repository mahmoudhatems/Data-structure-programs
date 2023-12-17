#include <iostream>
using namespace std;
int main()
{
	int LA[] = { 1, 3, 5, 7, 8 };
	int item = 5, n = 5;
	int j = 0;
	cout << "The original array elements are :\n";
	for (int i = 0; i < n; i++)
	{
		cout << "LA[" << i << "]=" << LA[i] << "\n";
	}
	while (j < n) {
		if (LA[j] == item)
		{
			cout << "Found_element " << item << " At position " << j + 1 << endl;
			break;
		}
		j = j + 1;
	}
}
