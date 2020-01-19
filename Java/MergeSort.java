import org.omg.CORBA.PRIVATE_MEMBER;

public class MergeSort {
	private static void Merge(int ar[], int L[], int R[]) {
		int nl = L.length, rl = R.length;
		int i = 0, j = 0, k = 0; 
		while ( i < nl && j < rl ) {
			if ( L[i] <= R[j] ) {
				ar[k] = L[i]; 
				i++;
			} else {
				ar[k] = R[j]; 
				j++;
			}
			k++;
		}
		
		while ( i < nl ) {
			ar[k] = L[i];
			i++;
			k++;
		}
		
		while ( j < rl ) {
			ar[k] = R[j]; 
			j++; 
			k++;
		}
	}
	
	private static void mergeSort(int ar[]) {
		int n = ar.length;
		if ( n < 2 ) 
			return;
		int mid = n / 2; 
		int L[] = new int[mid];
		int R[] = new int[n-mid];
		for ( int i = 0; i < mid; i++ )
			L[i] = ar[i];
		
		for ( int i = mid; i < n; i++ ) 
			R[i-mid] = ar[i];
		
		mergeSort(L);
		mergeSort(R);
		
		Merge(ar, L, R);
	}

	public static void main(String[] args) {
		int ar[] = {2, 7, 4, 1, 5, 3}; 
		int n = ar.length;
		
		System.out.print("Unsorted : ");
		for ( int i = 0; i < n; i++ ) 
			System.out.print(ar[i] + " ");
		System.out.println();
		
		mergeSort(ar);
		
		System.out.print("Sorted :");
		for ( int i = 0; i < n; i++ ) 
			System.out.print(ar[i] + " ");
		System.out.println();
	}

}
