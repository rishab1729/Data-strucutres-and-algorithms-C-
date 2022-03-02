/*
Selection sort divides the input list into two parts: a sorted sublist of items which is built up from right to left at the end of the list and a sublist of the remaining unsorted items 
that occupy the rest of the list. It provides by finding the smallest (or  largest, depending on sorting order) element in the unsorted sublist, exchanging it with the rightmost
unsorted element and moving the sublist boundaries one element to the left.

Algorithm:

for ( i=input.length-1 to i>0 ){
  int maxIndex = 0;
  for (j = 1 to j<=i){
    if (input[j] > input[maxIndex]){
      maxIndex = j;
    }
   }
   
   if (maxIndex != i)
    swap input[i] & input[maxIndex]
    
  }
*/

#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n)
{
	int i, j, min_idx;

	for (i = 0; i < n-1; i++)
	{
		min_idx = i;
		for (j = i+1; j < n; j++)
		if (arr[j] < arr[min_idx])
			min_idx = j;

		swap(arr[min_idx], arr[i]);
	}
}

int main()
{
	int arr[] = {88,4,55,21,64,24};
	int n = *(&arr+1)-arr,i=0;
	
	selection_sort(arr, n);
	
	cout << "Sorted array: \n";
	while (i<n)
		cout << arr[i++] << " ";
	cout << endl;
	
	return 0;
}
