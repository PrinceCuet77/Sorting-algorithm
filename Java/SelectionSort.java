public class SelectionSort {
	private static void selectionSort(int ar[], int n) {
		for ( int i = 0; i < n-1; i++ ) {
			int iMin = i; 
			for ( int j = i+1; j < n; j++ ) {		// Finding the smallest element
				if ( ar[j] < ar[iMin] ) 
					iMin = j;
			}
			int temp = ar[iMin];					// Swapping 
			ar[iMin] = ar[i];
			ar[i] = temp;
		}
	}

	public static void main(String[] args) {
		int ar[] = {2, 7, 4, 1, 5, 3}; 
		int n = ar.length;
		
		System.out.print("Unsorted : ");
		for ( int i = 0; i < n; i++ ) 
			System.out.print(ar[i] + " ");
		System.out.println();
		
		selectionSort(ar, n);
		
		System.out.print("Sorted :");
		for ( int i = 0; i < n; i++ ) 
			System.out.print(ar[i] + " ");
		System.out.println();
	}

}
