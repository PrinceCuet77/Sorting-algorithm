#include <bits/stdc++.h>
using namespace std;

int partitionArray(int ar[], int start, int finish) {
        int pivot = ar[finish];
        int pIndex = start;
        for ( int i = start; i < finish; i++ ) {
                if ( ar[i] <= pivot ) {
                        int temp = ar[i];
                        ar[i] = ar[pIndex];
                        ar[pIndex] = temp;

                        pIndex++;
                }
        }

        int temp = ar[finish];
        ar[finish] = ar[pIndex];
        ar[pIndex] = temp;

        return pIndex;
}

void quickSort(int ar[], int start, int finish) {
        if ( start < finish ) {
                int pIndex = partitionArray(ar, start, finish);
                quickSort(ar, start, pIndex-1);
                quickSort(ar, pIndex+1, finish);
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

        quickSort(ar, 0, n-1);

        cout << "Ordered sort : ";
        for ( int i = 0; i < n; i++ )
                cout << ar[i] << " ";
        cout << endl;

        return 0;
}

