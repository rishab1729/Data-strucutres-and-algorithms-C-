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

