#include <bits/stdc++.h>
using namespace std;

void Merge(int ar[], int L[], int R[], int nl, int rl) {

        cout << nl << " " << rl << endl;
        int i = 0, j = 0, k = 0;
        while ( i < nl && j < rl ) {            // Sorting L and R array and store to ar array
                if ( L[i] <= R[j] ) {
                        ar[k] = L[i];
                        i++;
                        k++;
                } else {
                        ar[k] = R[j];
                        j++;
                        k++;
                }
        }

        while ( i < nl ) {                      // Adding remaining L array element
                ar[k] = L[i];
                i++;
                k++;
        }

        while ( j < rl ) {                      // Adding remaining R array element
                ar[k] = R[j];
                j++;
                k++;
        }
}

void mergeSort(int ar[], int n) {
        if ( n < 2 )                            // Base case
                return;

        int mid = n / 2;

        int L[mid], R[n-mid];                   // Dividing two array
        for ( int i = 0; i < mid; i++ )         // Copy first mid-1 element to L array
                L[i] = ar[i];

        for ( int i = mid; i < n; i++ )         // Copy mid to n-mid element to R array
                R[i-mid] = ar[i];

        mergeSort(L, mid);                      // Recursive calling for L array
        mergeSort(R, n-mid);                    // Recursive calling for R array
        Merge(ar, L, R, mid, n-mid);            // Sorting L and R array
}

int main()
{
        int ar[] = {2, 7, 4, 1, 5, 3};
        int n = sizeof(ar) / sizeof(ar[0]);

        cout << "Unordered sort : ";
        for ( int i = 0; i < n; i++ )
                cout << ar[i] << " ";
        cout << endl;

        mergeSort(ar, n);

        cout << "Ordered sort : ";
        for ( int i = 0; i < n; i++ )
                cout << ar[i] << " ";
        cout << endl;

        return 0;
}
