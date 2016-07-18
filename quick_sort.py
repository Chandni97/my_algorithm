A = [7,2,1,6,8,5,3,4] #global array

def main():
	start = 0 
	end = len(A)-1
	quick_sort(start,end)
	print A

def quick_sort(start,end):
	if (start < end):	 # exit condition
			pindex = partition(start,end) # get the index of the number by which the array is paritioned
			quick_sort(start,pindex-1) # sort the array left to the pindex
			quick_sort(pindex+1,end)  # sort the array right to the pindex

def partition(start,end): 
	pivot = A[end] # the number which will act as a pivot , as a partitioning number
	pindex = start # set partition at start

	for index in range(start,end+1): # get the index from start till the end
		if(A[index] <= pivot): # if the number at the index is less than the pivot
			swap(index,pindex) # swap the number with the number at the partition
			pindex=pindex+1 

	return pindex-1

	

def swap(index,pindex): #swap function
	temp = A[index]
	A[index] = A[pindex]
	A[pindex] = temp

main()