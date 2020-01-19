#include <bits/stdc++.h>
using namespace std;

void insertionSort(int ar[], int n) {
        for ( int i = 1; i < n; i++ ) {
                int value = ar[i];
                int index = i;

                while ( index > 0 && ar[index-1] > value ) {
                        ar[index] = ar[index-1];
                        index--;
                }

                ar[index] = value;
        }
}

int main()
{
        int ar[] = {7, 2, 4, 3, 8};
        int n = sizeof(ar) / sizeof(ar[0]);

        // Print the array
        for ( int i = 0; i < n; i++ )
                cout << ar[i] << " ";
        cout << endl;

        // Sorting function
        insertionSort(ar, n);

        // Increasing order
        for ( int i = 0; i < n; i++ )
                cout << ar[i] << " ";
        cout << endl;

        return 0;
}
