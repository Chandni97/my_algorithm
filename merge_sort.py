

def main():
	A = [24,12,3,53,34,56,43,65,74,23,6,1,7] #put any values 
	merge_sort(A) #calling the function
	print A #printing sorted array

def merge_sort(A):
	if(len(A) == 1): #donot split if there is only one value left in the array , "the base case"
		return

	mid = 0 + (len(A) - 1) / 2 #get the mid index
	B = A[0:(mid+1)] #slice the array in two halves and store it in different arrays
	C = A[mid+1:len(A)]
	merge_sort(B) # keep doing it for all the sub-arrays 
	merge_sort(C)
	sort(A,B,C) # start sorting the arrays

def sort(A,B,C):
	i=0
	j=0
	k=0
	blen = len(B)
	clen = len(C)
	while(i != blen and j != clen ): #run the loop until one of the sub-array runs out of numbers
		if(B[i] < C[j]): #check for the smallest number in the specified index
			A[k] = B[i] # assign the smallest number in the specified index to the parent array
			i=i+1 
		else:
			A[k] = C[j] #same as above
			j=j+1
		k=k+1

	while(i != blen): # check if all the numbers are visited and if not 
		A[k] = B[i] # assign all the numbers from that sub-array to the parent array
		i=i+1
		k=k+1

	while(j != clen): #same as above
		A[k] = C[j]
		k=k+1
		j=j+1


main() #call the function


