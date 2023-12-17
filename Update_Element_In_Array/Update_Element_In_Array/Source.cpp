#include <iostream>
using namespace std;

int main() {
	int LA[] = { 1,3,5,7,8 };
	int k = 3, n = 5, item = 10;
	int i, j;
	cout << " The original array elements are : \n";
	for (i = 0; i < n; i++) {
		cout << "LA[" << i << "]=" << LA[i] << endl;
	}
	LA[k - 1] = item;
	cout << "The Array elements after update :\n";
	for (i = 0; i < n; i++) {
		cout << "LA[" << i << "]=" << LA[i] << endl;
	}
}