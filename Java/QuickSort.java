public class QuickSort {
	private static int partitionArray(int ar[], int start, int end) {
		int pivot = ar[end];
		int pIndex = start; 
		for ( int i = start; i < end; i++ ) {
			if ( ar[i] <= pivot ) {
				int temp = ar[i]; 
				ar[i] = ar[pIndex]; 
				ar[pIndex] = temp;
			}
		}
		
		int temp = ar[end]; 
		ar[end] = ar[pIndex]; 
		ar[pIndex] = temp;
		
		return pIndex;
	}
	
	private static void quickSort(int ar[], int start, int end) {
		if ( start < end ) {
			int pIndex = partitionArray(ar, start, end);
			quickSort(ar, start, pIndex-1);
			quickSort(ar, pIndex+1, end);
		}
	}

	public static void main(String[] args) {
		int ar[] = {2, 7, 4, 1, 5, 3}; 
		int n = ar.length;
		
		System.out.print("Unsorted : ");
		for ( int i = 0; i < n; i++ ) 
			System.out.print(ar[i] + " ");
		System.out.println();
		
		quickSort(ar, 0, n-1);
		
		System.out.print("Sorted :");
		for ( int i = 0; i < n; i++ ) 
			System.out.print(ar[i] + " ");
		System.out.println();
	}

}
