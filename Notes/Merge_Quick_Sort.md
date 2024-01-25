# Merge Sort Algorithm

MergeSort is another popular sorting algorithm that follows the divide-and-conquer approach. Here's the algorithm for MergeSort:

```plaintext
Algorithm: MergeSort

mergesort(array)
    if length of array <= 1
        return array
    
    # Split the array into two halves
    mid = length of array // 2
    left_half = array[0:mid]
    right_half = array[mid:]

    # Recursively apply mergesort to both halves
    left_half = mergesort(left_half)
    right_half = mergesort(right_half)

    # Merge the sorted halves
    merged_array = merge(left_half, right_half)

    return merged_array

merge(left, right)
    result = []
    left_index = 0
    right_index = 0

    # Compare elements from left and right subarrays and merge
    while left_index < length of left and right_index < length of right
        if left[left_index] <= right[right_index]
            append left[left_index] to result
            increment left_index
        else
            append right[right_index] to result
            increment right_index

    # Append remaining elements from left and right subarrays (if any)
    append remaining elements of left to result
    append remaining elements of right to result

    return result
```

Explanation:

1. **mergesort(array):**
   - If the length of the array is 0 or 1, it is already sorted, so return the array.
   - Otherwise, split the array into two halves and recursively apply `mergesort` to each half.
   - Merge the sorted halves using the `merge` function.

2. **merge(left, right):**
   - Initialize an empty array `result` to store the merged elements.
   - Use two pointers (`left_index` and `right_index`) to traverse the left and right subarrays.
   - Compare elements from both subarrays and append the smaller one to the `result`.
   - Increment the pointer of the chosen subarray.
   - Repeat until one of the subarrays is exhausted.
   - Append any remaining elements from the non-empty subarray to the `result`.
   - Return the merged result.

Here is a Python implementation of the MergeSort algorithm:

```Python
def merge(arr, low, high, mid):
    temp = []
    left = low
    right = mid + 1

    while(left<=mid and right<=high):
        if arr[left] < arr[right]:
            temp.append(arr[left])
            left+=1
        else:
            temp.append(arr[right])
            right+=1
    
    while(left<=mid):
        temp.append(arr[left])
        left+=1
    while(right<=high):
        temp.append(arr[right])
        right+=1
    
    for i in range(low, high+1):
        arr[i] = temp[i - low]
    
    return arr




def mergeSort(arr, low, high):
    if low == high : return
    mid = (low + high) // 2
    mergeSort(arr, low, mid)
    mergeSort(arr, mid+1, high)
    merge(arr, low, high, mid)

    return arr

    


def main():
    my_array = [6,3,2,1,5,4,9]
    print(my_array)
    mergeSort(my_array, 0, len(my_array) - 1)
    print(my_array)




if __name__ == "__main__":
    main()
```



# Quick Sort Algorithm
Here is a high-level overview of the QuickSort algorithm:

1. **Choose Pivot:**
   - Select a pivot element from the array. The choice of the pivot can affect the performance of the algorithm. Common choices include the first element, the last element, or a randomly chosen element.

2. **Partitioning:**
   - Rearrange the array elements so that all elements smaller than the pivot are placed to its left, and all elements greater than the pivot are placed to its right.
   - After partitioning, the pivot is in its final sorted position.

3. **Recursion:**
   - Recursively apply the QuickSort algorithm to the subarrays on the left and right of the pivot.

4. **Base Case:**
   - The base case is when the subarray has fewer than two elements, as it is already sorted.

The partitioning step is a key operation in QuickSort and is performed efficiently using two pointers (i and j) that traverse the array from both ends.

The time complexity of QuickSort is generally O(n log n) on average, making it one of the fastest sorting algorithms. However, its worst-case time complexity is O(n^2) if poorly chosen pivots lead to unbalanced partitions. Various strategies, such as choosing the median as the pivot or using randomized pivots, are employed to mitigate worst-case scenarios.



```Pseudo Code
Algorithm: Quick Sort

quicksort(array, low, high)
    if low < high
        partition_index = partition(array, low, high)
        quicksort(array, low, partition_index - 1)
        quicksort(array, partition_index + 1, high)

partition(array, low, high)
    pivot = array[low]
    i = low
    j = high
    while i < j
        while array[i] <= pivot and i <= high
            i += 1
        while array[j] > pivot and j >= low
            j -= 1
        if i < j
            swap(array[i], array[j])
    swap(array[low], array[j])
    return j
```

Explanation:

1. **quicksort(array, low, high):**
   - If `low` is less than `high`, perform the following steps:
     - Call the `partition` function to find the partition index.
     - Recursively call `quicksort` on the left and right subarrays (before and after the partition index).

2. **partition(array, low, high):**
   - Choose a pivot element (in this case, the element at `array[low]`).
   - Initialize two pointers, `i` and `j`, at the extremes of the subarray.
   - Move `i` to the right until an element greater than the pivot is found, and move `j` to the left until an element less than or equal to the pivot is found.
   - If `i` is still less than `j`, swap the elements at positions `i` and `j`.
   - Continue this process until `i` is greater than or equal to `j`.
   - Swap the pivot element with the element at position `j`.
   - Return the final position of the pivot element.

This algorithm efficiently sorts an array in-place by recursively partitioning the array and sorting its subarrays. The choice of the pivot and the partitioning strategy are crucial for the algorithm's performance.

**Python Code**
```Python Code
def partition(array, low, high):
    pivot = array[low]
    i = low
    j = high
    while(i < j):
        while(array[i] <= pivot and  i<=high-1):
            i+=1
        while(array[j] > pivot and j>=low+1):
            j-=1
        if(i<j):
            array[i], array[j] = array[j], array[i]
    array[low], array[j] = array[j], array[low]
    return j



def qs(array, low, high):
    if(low < high):
        pIndex = partition(array, low, high)
        qs(array, 0, pIndex - 1)
        qs(array, pIndex+1, high)
    


def quickSort(array):
    qs(array, 0, len(array) - 1)
    return array




def main():
    my_array = [5,10,9,7]
    print(my_array)
    quickSort(my_array)
    print(my_array)

if __name__ == "__main__":
    main()
```

