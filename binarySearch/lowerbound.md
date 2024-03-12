# Problem Statement

You are given an array 'arr' sorted in non-decreasing order and a number 'x'.

You must return the index of lower bound of 'x'.

Note:
For a sorted array 'arr', 'lower_bound' of a number 'x' is defined as the smallest index 'idx' such that the value 'arr[idx]' is not less than 'x'

If all numbers are smaller than 'x', then 'n' should be the 'lower_bound' of 'x', where 'n' is the size of array.

Consider 0-based indexing.


Example:
Input: ‘arr’ = [1, 2, 2, 3] and 'x' = 0

Output: 0

Explanation: Index '0' is the smallest index such that 'arr[0]' is not less than 'x'.

**Note:** here i am gonna search for lower bound based on 2 cases
1. maybe the answer 
2. move towards extreme right

**code:**
```cpp
int lowerBound(vector<int> arr, int n, int x) {
	// Write your code here
	int ans = n;
	int left = 0;
	int right = n - 1;
	while(left<=right){
		int mid = left + (right - left) / 2;
		// maybe the answer, if not adjust the pointer
		if(arr[mid] >= x){
			ans = mid;
			right = mid - 1;
		}else{ // move to right of the array
			left = mid + 1;
		}
	}
	return ans;
}
```