def selectionSort(ar, n) : 
	for i in range(0, n-1) : 
		iMin = i 
		for j in range(i+1, n) : 
			if ar[j] < ar[iMin] : 
				iMin = j 
		temp = ar[iMin]
		ar[iMin] = ar[i]
		ar[i] = temp

# main 
ar = [2, 7, 4, 1, 5, 3]
n = len(ar)

print("Unsorted : ", end = " ") 
for i in range(0, n) : 
	print(ar[i], end = " ")
print()

selectionSort(ar, n)

print("Sorted : ", end = " ") 
for i in range(0, n) : 
	print(ar[i], end = " ")
print()