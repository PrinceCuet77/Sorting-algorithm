def Merge(ar, L, R) : 
	nl = len(L)
	rl = len(R)
	i = j = k = 0
	while ( i < nl and j < rl ) : 
		if L[i] <= R[j] : 
			ar[k] = L[i] 
			i += 1 
		else : 
			ar[k] = R[j]
			j += 1
		k += 1 

	while i < nl : 
		ar[k] = L[i] 
		i += 1
		k += 1

	while j < rl : 
		ar[k] = R[j]
		j += 1 
		k += 1

def mergeSort(ar) : 
	n = len(ar) 
	if n > 1 : 
		mid = int(n / 2)
		L = ar[:mid]
		R = ar[mid:] 

		mergeSort(L)
		mergeSort(R)

		Merge(ar, L, R)

# main 
ar = [2, 7, 4, 1, 5, 3]
n = len(ar)

print("Unsorted : ", end = " ") 
for i in range(0, n) : 
	print(ar[i], end = " ")
print()

mergeSort(ar)

print("Sorted : ", end = " ") 
for i in range(0, n) : 
	print(ar[i], end = " ")
print()