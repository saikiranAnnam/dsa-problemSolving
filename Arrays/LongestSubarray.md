## Problem Statement

Longest Subarray With Sum K

Problem statement
You are given an array 'a' of size 'n' and an integer 'k'.



Find the length of the longest subarray of 'a' whose sum is equal to 'k'.



Example :
Input: ‘n’ = 7 ‘k’ = 3
‘a’ = [1, 2, 3, 1, 1, 1, 1]

Output: 3

Explanation: Subarrays whose sum = ‘3’ are:

[1, 2], [3], [1, 1, 1] and [1, 1, 1]

Here, the length of the longest subarray is 3, which is our final answer.


**brute force:**

```python
def longestSubarrayWithSumK(a: [int], k: int) -> int:
    max_len = 0 
    for i in range(len(a)):
        len_arr = 0
        sum = 0
        for j in range(i, len(a)):
            sum = sum + a[j]
            if(sum == k):
                len_arr = j - i + 1
            max_len = max(len_arr,max_len)
    return max_len
```