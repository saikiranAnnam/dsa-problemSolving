## Problem Statement

There is an integer array ‘A’ of size ‘N’.

A sequence is successive when the adjacent elements of the sequence have a difference of 1.

You must return the length of the longest successive sequence.

Note:

You can reorder the array to form a sequence. 
For example,

Input:
A = [5, 8, 3, 2, 1, 4], N = 6
Output:
5
Explanation: 
The resultant sequence can be 1, 2, 3, 4, 5.    
The length of the sequence is 5.


**slove problem our own :** https://www.codingninjas.com/studio/problems/longest-successive-elements_6811740?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

**code:**

int longestSuccessiveElements(vector<int>&a) {
    // Write your code here.
    int ans = 1;
    int n = a.size();
    int currLen = 1;

    if(n<=1) return n;

    for (int i = 1; i < n; i++) {
        if(a[i] == a[i - 1] + 1){
            currLen++;
        }else{
            ans = max(ans, currLen);
            currLen = 1;
        }
    }
    ans = max(ans, currLen);
    return ans;
}


