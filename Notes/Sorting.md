# Sorting Algorithms 🗂️

Sorting is a fundamental operation in computer science and data structures. It involves arranging the elements of a collection in a specific order, typically ascending or descending based on certain criteria. Sorting is crucial in various algorithms and applications for efficiently organizing and retrieving data.

There are numerous sorting algorithms, each with its own advantages and disadvantages. Some common sorting algorithms include:

1. **Bubble Sort:** Simple, but not efficient for large datasets.
2. **Insertion Sort:** Efficient for small datasets.
3. **Selection Sort:** Simple, but not efficient for large datasets.
4. **Merge Sort:** Efficient and stable for larger datasets.
5. **Quicksort:** Efficient and widely used.
6. **Heapsort:** Efficient and in-place.

**Importance of Sorting in Real-Life:** 

1. **Information Retrieval:** In databases and file systems, sorting enables quicker search and retrieval operations. For example, a sorted list allows for binary search, which has a time complexity of O(log n).

2. **Enhancing Performance:** Sorting helps in optimizing the performance of algorithms. Many algorithms work more efficiently on sorted data, leading to faster execution times.

3. **User Experience:** In user interfaces and applications, sorted data provides a better user experience. Users find it easier to locate information in a sorted list, enhancing usability.

4. **Data Analysis:** In data science and analytics, sorting is often a preliminary step for various operations, such as finding the median, quartiles, or identifying patterns in data.

5. **Algorithms and Problem Solving:** Sorting is a key component in many algorithms. For instance, in divide-and-conquer algorithms like merge sort, or in dynamic programming problems, sorting can simplify the solution.

6. **Data Presentation:** In graphical representation of data, sorting is essential for creating meaningful charts and graphs. It helps in presenting data in an understandable and visually appealing manner.

7. **Searching Algorithms:** Many searching algorithms, like binary search, assume sorted data. Sorting facilitates efficient searching, reducing the time complexity of search operations.

**Interview Considerations:**


## 🔢 Selection Sort

1. **Simple Implementation:**
   - Selection sort is a straightforward sorting algorithm that is easy to understand and implement.
   - It involves repeatedly finding the minimum element in the unsorted part of the array and swapping it with the first unsorted element.
   - The simplicity of the algorithm makes it a good choice for educational purposes and small datasets.

2. **Quadratic Time Complexity:**
   - Selection sort has a time complexity of O(n^2) in all cases (best, average, and worst).
   - The algorithm compares and swaps elements within nested loops, resulting in a performance that degrades quadratically with the size of the input.
   - While simple, its efficiency diminishes for larger datasets compared to more advanced sorting algorithms.

3. **In-Place Sorting Algorithm:**
   - Selection sort is an in-place sorting algorithm, meaning it doesn't require additional memory proportional to the size of the input.
   - The algorithm performs swaps directly on the input array without the need for auxiliary data structures.
   - This in-place characteristic can be advantageous in situations with limited memory resources.

### Pros and Cons of Selection Sort:

**Pros:**
1. **Simplicity:** Selection sort is easy to understand and implement, making it a good choice for educational purposes and small datasets.
2. **In-Place Sorting:** It is an in-place sorting algorithm, which means it doesn't require additional memory proportional to the size of the input.

**Cons:**
1. **Quadratic Time Complexity:** Selection sort has a time complexity of O(n^2) in all cases, making it less efficient than other sorting algorithms for larger datasets.
2. **Not Adaptive:** It doesn't adapt to the existing order of elements. Even if the array is partially sorted, selection sort still performs the same number of comparisons and swaps.

### Time and Space Complexity:

- **Best Case Time Complexity:** O(n^2)
- **Average Case Time Complexity:** O(n^2)
- **Worst Case Time Complexity:** O(n^2)

- **Space Complexity:** O(1) - Selection sort is an in-place sorting algorithm, meaning it doesn't use additional memory proportional to the input size. The space complexity is constant, O(1).

**NOTE - Selection sort (finding the mininum element in the array and swaping with starting index).**


**Code:**

***C++ Code :***
```
int  selectionSort(int arr[], int n){
    int min = 0;
    for(int i = 0; i<=n-2; i++){
        min = i;
        for(int j = i;j<=n-1; j++){
            if(arr[min] > arr[j]){
                min = j;
            }
            swap(arr[min], arr[i]);
        }
    }
    return 0;
}

```

***Python Code***
```
def selectionSort(arr):
    min = 0
    n = len(arr)
    for i in range(0, n-1):
        min = i
        for j in range(i, n):
            if arr[min] > arr[j]: 
                min = j
            arr[i], arr[min] = arr[min], arr[i]
    return arr
```

## 🔢 Bubble Sort

1. **Simple Implementation:**
   - Bubble sort is a straightforward sorting algorithm based on comparing and swapping adjacent elements.
   - Its simplicity makes it easy to understand and implement, making it suitable for educational purposes and small datasets.

2. **Stable Sorting Algorithm:**
   - Bubble sort is a stable sorting algorithm, meaning that it preserves the relative order of equal elements in the sorted output.
   - This property is essential in scenarios where maintaining the initial order of equal elements is critical.

3. **Inefficient for Large Datasets:**
   - Bubble sort has a quadratic time complexity of O(n^2), making it inefficient for large datasets.
   - Its performance degrades quickly with an increase in the size of the input, and it is often outperformed by more efficient sorting algorithms.

### Pros and Cons of Bubble Sort:

**Pros:**
1. **Simplicity:** Bubble sort is easy to understand and implement, making it a good choice for educational purposes.
2. **Adaptive:** It can efficiently handle partially sorted datasets with fewer swaps.

**Cons:**
1. **Quadratic Time Complexity:** Bubble sort has a time complexity of O(n^2) in all cases, making it less efficient than many other sorting algorithms for larger datasets.
2. **Not Efficient for Large Datasets:** Due to its quadratic time complexity, bubble sort becomes impractical for sorting large datasets compared to more advanced algorithms.

### Time and Space Complexity:

- **Best Case Time Complexity:** O(n) - Occurs when the array is already sorted.
- **Average Case Time Complexity:** O(n^2)
- **Worst Case Time Complexity:** O(n^2)

- **Space Complexity:** O(1) - Bubble sort is an in-place sorting algorithm, meaning it doesn't use additional memory proportional to the input size. The space complexity is constant, O(1).

**Code:**

***C++ Code :***
```
int bubbleSort(int arr[], int n){
    for(int i=0; i<n;i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
    return 0;
}
    
```

***Python Code :***
```
def bubbleSort(arr) : 
    n = len(arr)
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j] , arr[j+1] = arr[j+1], arr[j]

    return arr
```

## 🔢 Insertion Sort 

1. **Adaptive and Stable:**
   - Insertion sort is adaptive; it performs well on partially sorted arrays by minimizing the number of comparisons and swaps.
   - It is also a stable sorting algorithm, preserving the relative order of equal elements in the sorted output.

2. **Efficient for Small Datasets:**
   - Insertion sort is particularly efficient for small datasets or nearly sorted datasets.
   - Its simple implementation and low overhead make it a practical choice when dealing with a limited number of elements.

3. **In-Place Sorting Algorithm:**
   - Insertion sort is an in-place sorting algorithm, meaning it doesn't require additional memory proportional to the size of the input.
   - It works directly on the input array, making it memory-efficient.

### Pros and Cons of Insertion Sort:

**Pros:**
1. **Adaptive:** Performs well on partially sorted datasets, requiring fewer comparisons and swaps.
2. **Simple Implementation:** It is easy to understand and implement, making it suitable for educational purposes and small datasets.

**Cons:**
1. **Quadratic Time Complexity:** In the worst case, insertion sort has a time complexity of O(n^2), which makes it less efficient than some other sorting algorithms for large datasets.
2. **Not Suitable for Large Datasets:** Due to its quadratic time complexity, insertion sort becomes inefficient for sorting large datasets compared to more advanced algorithms.

### Time and Space Complexity:

- **Best Case Time Complexity:** O(n) - Occurs when the array is already sorted.
- **Average Case Time Complexity:** O(n^2)
- **Worst Case Time Complexity:** O(n^2)

- **Space Complexity:** O(1) - Insertion sort is an in-place sorting algorithm, meaning it doesn't use additional memory proportional to the input size. The space complexity is constant, O(1).

**Code:**

***C++ Code :***
```
int insertionSort(int arr[], int n){
    for(int i=0; i<n; i++){
        int j = i;
        while(j > 0 && arr[j-1] > arr[j] ){
            swap(arr[j-1], arr[j]);
            j--;
        }
    }
    return 0;
}

```

***Python Code :***

```
def insertionSort(arr):
    n = len(arr)
    for i in range(n):
        j = i
        while j>0 and arr[j-1] > arr[j]:
            arr[j-1], arr[j] = arr[j], arr[j-1]
            j -= 1
    
    return arr
```