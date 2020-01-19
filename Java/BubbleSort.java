public class BubbleSort {
	private static void bubbleSort(int ar[], int n) {
		for ( int i = 0; i < n; i++ ) {
			boolean flag = false; 
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

	public static void main(String[] args) {
		int ar[] = {2, 7, 4, 1, 5, 3}; 
		int n = ar.length;
		
		System.out.print("Unsorted : ");
		for ( int i = 0; i < n; i++ ) 
			System.out.print(ar[i] + " ");
		System.out.println();
		
		bubbleSort(ar, n);
		
		System.out.print("Sorted :");
		for ( int i = 0; i < n; i++ ) 
			System.out.print(ar[i] + " ");
		System.out.println();
	}

}
