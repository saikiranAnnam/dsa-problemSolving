## Problem statement

You have been given an array ‘a’ of ‘n’ non-negative integers.You have to check whether the given array is sorted in the non-decreasing order or not.
Your task is to return 1 if the given array is sorted. Else, return 0.

Example :
Input: ‘n’ = 5, ‘a’ = [1, 2, 3, 4, 5]
Output: 1

The given array is sorted in non-decreasing order; hence the answer will be 1.

**slove problem our own** : https://www.codingninjas.com/studio/problems/ninja-and-the-sorted-check_6581957?utm_source=striver&utm_medium=website&utm_campaign=codestudio_a_zcourse

**code**
```cpp
int isSorted(int n, vector<int> a){
    // Write your code here.
    for(int i=1; i<n; i++){
        if(a[i]>=a[i-1]){
        }else{
            return 0;
        }
    }
    return 1;
}
```