### sorting algorithms in c++
* my notes on sorting algorithms in c++

### Bubble sort
* compare each pair and put the largest in the right most place.

### Insertion sort
* Take a number (start from 2nd pos) as a key. Compare it with the previous number. 
* If the key is smaller, shift the previous number to the right.
* Repeat this process as long as the key is smaller than the previous number.
* Insert the key in the right place.


### Selection sort
* Select the smallest element and put it in the left most place.

### Quicksort
* Select a pivot element
* Put all the elements smaller than the pivot to the left of the pivot
* Put all the elements larger than the pivot to the right of the pivot
* Recursively sort the left and right subarrays


### Merge sort
* Divide the array into two subarrays
* Recursively sort the left and right subarrays
* Merge the two sorted subarrays

### Heap sort
* build heap
* swap the root with the last element
* remove the last element from the heap
* heapify the root
* repeat the above steps until the heap is empty

```
sorting algorithms:
N=100000
ms=microseconds
bubble_t: 32580000 ms
insertion_t: 6536000 ms
selection_t: 10911000 ms
merge_t: 31000 ms
quick_t: 16000 ms
heap_t: 31000 ms
```
