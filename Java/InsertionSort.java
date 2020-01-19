public class InsertionSort {
	
	private static void insertionSort(int ar[], int n) {
		for ( int i = 1; i < n; i++ ) {
			int value = ar[i];
			int index = i; 
			
			while ( index > 0 && ar[index-1] > ar[index] ) {
				ar[index] = ar[index-1];
				index--;
			}
			
			ar[index] = value;
		}
	}

	public static void main(String[] args) {
		int ar[] = {7, 2, 4, 3, 8};
		int n = ar.length; 
		
		// Print the array 
		for ( int i = 0; i < n; i++ ) 
			System.out.print(ar[i] + " ");
		System.out.println();
		
		// Calling sorting function
		insertionSort(ar, n);
		
		// Print increasing order
		for ( int i = 0; i < n; i++ ) 
			System.out.print(ar[i] + " ");
		System.out.println();
	}

}
