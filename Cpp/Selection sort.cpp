#include <bits/stdc++.h>
using namespace std;

void selectionSort(int ar[], int n) {
	for ( int i = 0; i < n-1; i++ ) {
		int iMin = i;                           // Storing the min index
		for ( int j = i+1; j < n; j++ ) {       // Finding the smallest number's index in the array
			if ( ar[j] < ar[iMin] )
				iMin = j;
		}
		int temp = ar[i];                       // Swap the numbers
		ar[i] = ar[iMin];
		ar[iMin] = temp;
	}
}

void func() {
	
}

int main()
{
	int ar[] = {2, 7, 4, 1, 5, 3};
	int n = sizeof(ar) / sizeof(ar[0]); 		// Calculating the size of the array

	cout << "Unsorted order : ";
	for ( int i = 0; i < n; i++ )
		cout << ar[i] << " ";
	cout << endl;

	selectionSort(ar, n);

	cout << "Sorted order : ";
	for ( int i = 0; i < n; i++ )
		cout << ar[i] << " ";
	cout << endl;

	return 0;
}
