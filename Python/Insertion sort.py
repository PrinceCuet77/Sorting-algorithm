def insertionSort(ar, n) : 
	for i in range(1, n) : 
		value = ar[i]; 
		index = i; 

		while (index > 0 and ar[index-1] > value) : 
			ar[index] = ar[index-1] 
			index -= 1

		ar[index] = value

# main method 
ar = [7, 2, 4, 3, 8]
n = len(ar)

# Print the array 
for i in range(0, n) : 
	print(ar[i], end = " ")   
print()

# Calling sorting function
insertionSort(ar, n)

# Print increasing order 
for i in range(0, n) : 
	print(ar[i], end = " ")
print()