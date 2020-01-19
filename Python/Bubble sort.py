def bubbleSort(ar, n) : 
	for i in range(0, n) : 
		flag = False
		for k in range(0, n-i-1) : 
			if ar[k] > ar[k+1] : 
				temp = ar[k+1]
				ar[k+1] = ar[k]
				ar[k] = temp 

				flag = True 
		if flag == False :  
			break

# main 
ar = [2, 7, 4, 1, 5, 3]
n = len(ar)

print("Unsorted : ", end = " ") 
for i in range(0, n) : 
	print(ar[i], end = " ")
print()

bubbleSort(ar, n)

print("Sorted : ", end = " ") 
for i in range(0, n) : 
	print(ar[i], end = " ")
print()