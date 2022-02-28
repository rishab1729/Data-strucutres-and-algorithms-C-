/*
BUBBLE SORT:
Bubble sort is a simple sorting algoritm that repeatedly steps through the array, compares adjacent elements and swaps them if they are in the wrong order. The pass through 
the array is repeated unitl the array is sorted.

Algoritm:

for (index  = 0 to input.length-1) {
  for (j = 0 to j < input.lenght-1-index) {
    if (input[j] > input[j+1])
      swap input[J+1] & input[j]
  }
 }  
  */

#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int size)
{
	int i, j;
	for (i = 0; i < size-1; i++)	
	for (j = 0; j < size-i-1; j++)
		if (arr[j] > arr[j+1])
			swap(arr[j], arr[j+1]);
}

int main()
{
	int arr[] = {78, 11, 200, 4, 50, 7, 22};
	
	int size = *(&arr + 1) - arr,i=0;
	
	bubble_sort(arr, size);
	
	cout << "Sorted array: \n" ;
	
	while (i < size)
		cout << arr[i++] << " ";
	cout << endl;
	
	return 0;
	
}
