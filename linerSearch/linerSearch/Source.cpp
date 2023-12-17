#include <iostream>
 using namespace std;
 int main()
 {
	 int array[100], search, c, n;
	 cout << "Enter number of elements in array\n";
	 cin >> n;
	 cout << "Enter integer(s)\n" << n;
	 for (c = 0; c < n; c++)
		 cin >> array[c];
	 cout << "Enter a number to search\n";
	 cin >> search;
	 for (c = 0; c < n; c++) {
		 if (array[c] == search) /* If required element is found */
		 {
			 cout << search << " is present at location " << c + 1;
			 break;
		 }
	 }
	 if (c == n)
		 cout << search << " isn't present in the array.\n";
	 return 0;
 }