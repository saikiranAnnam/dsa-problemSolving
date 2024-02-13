## Problem Statement

There is an integer array ‘a’ of size ‘n’.
An element is called a Superior Element if it is greater than all the elements present to its right.
You must return an array all Superior Elements in the array ‘a’.

Note:
The last element of the array is always a Superior Element. 

Example
Input: a = [1, 2, 3, 2], n = 4
Output: 2 3
Explanation: 
a[ 2 ] = 3 is greater than a[ 3 ]. Hence it is a Superior Element. 
a[ 3 ] = 2 is the last element. Hence it is a Superior Element.
The final answer is in sorted order.

**slove problem our own :** https://www.codingninjas.com/studio/problems/superior-elements_6783446?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM


**code:**

```cpp
vector<int> superiorElements(vector<int>&a) {
    int n = a.size();
    int i = n - 2;
    vector<int> ans;
    ans.push_back(a[i+1]);
    for(int i = n-2;i>=0;i--){
        if(a[i]>ans.back()){
            ans.push_back(a[i]);
        }
    }
    return ans;
}
```