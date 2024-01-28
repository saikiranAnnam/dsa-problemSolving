## Problem statement

You are given a sorted integer array 'arr' of size 'n'.
You need to remove the duplicates from the array such that each element appears only once.

Return the length of this new array.

Note:
Do not allocate extra space for another array. You need to do this by modifying the given input array in place with O(1) extra memory. 


For example:
'n' = 5, 'arr' = [1 2 2 2 3].
The new array will be [1 2 3].
So our answer is 3.

**slove problem our own** : https://takeuforward.org/data-structure/remove-duplicates-in-place-from-sorted-array/#google_vignette

**brute force apporach**
1. lets declare a set so that the we can store the unquie element in the sets.

```cpp
set<int>st;
for(int i=0;i<n;i++){
    st.insert(arr[i]);
}
int index = 0;
for(auto it:st){
    arr[index] = it;
    index++;
}
return index;
```
so here the insertion in the set takes logN, n elements take nlogN. 
tc : n+nlogn
sc : O(n) -- for extra space set. 

**optimal apporach/ better apporach:** 
1. so lets focus on the optimizing the solution. 

***approach**
lets take 2 pointers, i and j. so the j pointer moves forward towards the array end. 
if the arr[i] and arr[j] are equal then the unqiue element is store to next index of the i. 

```python
def removeDuplicates(arr,n):
    i = 0 
    for j in range(1, n):
        if arr[i] != arr[j]:
            arr[i+1] = arr[j]
            i+=1
    return i+1
```

Tc: O(n)
sc : constant O(1)

