def partitionArray(ar, start, end) :
	pivot = ar[end]
	pIndex = start 

	for i in range(start, end) : 
		if ar[i] <= pivot : 
			temp = ar[i]
			ar[i] = ar[pIndex]
			ar[pIndex] = temp

			pIndex += 1

	temp = ar[end]
	ar[end] = ar[pIndex]
	ar[pIndex] = temp 

	return pIndex

def quickSort(ar, start, end) : 
	if start < end : 
		pIndex = partitionArray(ar, start, end) 
		quickSort(ar, start, pIndex-1)
		quickSort(ar, pIndex+1, end)

# main 
ar = [2, 7, 4, 1, 5, 3]
n = len(ar)

print("Unsorted : ", end = " ") 
for i in range(0, n) : 
	print(ar[i], end = " ")
print()

quickSort(ar, 0, n-1)

print("Sorted : ", end = " ") 
for i in range(0, n) : 
	print(ar[i], end = " ")
print()