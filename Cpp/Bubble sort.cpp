#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int ar[], int n) {
        for ( int i = 0; i < n; i++ ) {
                bool flag = false;
                for ( int k = 0; k < n-i-1; k++ ) {
                        if ( ar[k] > ar[k+1] ) {
                                int temp = ar[k+1];
                                ar[k+1] = ar[k];
                                ar[k] = temp;

                                flag = true;
                        }
                }
                if ( !flag )
                        break;
        }
}

int main()
{
        int ar[] = {2, 7, 4, 1, 5, 3};
        int n = sizeof(ar) / sizeof(ar[0]);

        cout << "Unordered sort : ";
        for ( int i = 0; i < n; i++ )
                cout << ar[i] << " ";
        cout << endl;

        bubbleSort(ar, n);

        cout << "Ordered sort : ";
        for ( int i = 0; i < n; i++ )
                cout << ar[i] << " ";
        cout << endl;

        return 0;
}
