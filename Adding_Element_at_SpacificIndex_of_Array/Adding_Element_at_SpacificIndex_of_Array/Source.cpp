#include <iostream>
using namespace std;
int main()
{
	int LA[] = { 2,3,5,7,8 };
	int item = 10, k = 3, n = 5;
	int i = 0, j = n - 1;
	cout << "The Original Array are :" << "\n";
	for (int i = 0; i < n; i++) {
		cout << "\nLA[" << i << "]=" << LA[i];
	}
	n = n + 1;
	while (j >= 3) {
		LA[j + 1] = LA[j];
		j = j - 1;
	}
	LA[k] = item;
	cout << "\n The Array elements after insertion are : \n";
	for (i = 0; i < n; i++) {
		cout << "\nLA[" << i << "]" << LA[i];
	}

	
}
