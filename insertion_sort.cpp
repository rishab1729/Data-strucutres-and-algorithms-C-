/*
Insertion sort iterates, consuming one input element each repetition and growing a sorted output array. At each iteration, insertion sort picks one element from the input data,
finds the location it belongs within the sorted array, and inserts it there. It repeats until no input elements remain.

Algorithm:

for (i =0; to i = input.length -1
){
  int temp = input[i]
  boolean hasMoved = false
  boolean notPlaced = true

  for (j = i - 1 to j = 0){
    if (input[j] > temp){
      input[j+1] = input[j]
      hasMoved = true
    }
    else
    {
      input[j+1] =  temp
      notPlaced = false
      break;
    }

  }
  if (hasMoved && notPlaced)
    input[0] = temp
}
*/

#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int input[], int n){
    for (int i =0; i< n; i++)
    {
        int temp = input[i];
        bool hasMoved = false;
        bool notPlaced = true;
        for (int j = i - 1;j>=0;j--){
            if (input[j] > temp){
                input[j+1] = input[j];
                hasMoved = true;
            }
            else
            {
                input[j+1] =  temp;
                notPlaced = false;
                break;
            }
        }
    if (hasMoved && notPlaced)
        input[0] = temp;
    }

}

int main()
{
	int arr[] = {89,56,78,11,23,5,32};
	int n = *(&arr + 1) - arr,i=0;

	insertion_sort(arr, n);
	
	while (i<n)
	{
	    cout << arr[i++] << " ";
	}
	cout << endl;

	return 0;
}

