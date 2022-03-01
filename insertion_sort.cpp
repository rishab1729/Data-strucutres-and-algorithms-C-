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

