/*
Heapsort can be thought of an improved selection sort: like selection sort, heapsort divides its input into a sorted and an unsorted region, and it itertively shrinks the unsorted
region by extracting the largest element from it  and inserting it into the sorted region. However, heapsort does not waste time with a linear-time scan; rather, heap sort maintains 
the unsorted region in a heap data strucutre to more quickly find the largest/smallest element in each step.

sort(){
int size = input.length
 for (int i = size/2-1 to 0)
 heapify(size, i)
 
 for  (int i = size-1 to 0) {
 swap input[i] & input[0]
 heapify(i,0)
 }
}

heapify(int n, int i){

}
*/
