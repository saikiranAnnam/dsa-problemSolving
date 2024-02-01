## Problem Statement
Given two sorted arrays, ‘a’ and ‘b’, of size ‘n’ and ‘m’, respectively, return the union of the arrays.



The union of two sorted arrays can be defined as an array consisting of the common and the distinct elements of the two arrays. The final array should be sorted in ascending order.

Note: 'a' and 'b' may contain duplicate elements, but the union array must contain unique elements.

Example:
Input: ‘n’ = 5 ‘m’ = 3
‘a’ = [1, 2, 3, 4, 6]
‘b’ = [2, 3, 5]

Output: [1, 2, 3, 4, 5, 6]

Explanation: Common elements in ‘a’ and ‘b’ are: [2, 3]
Distinct elements in ‘a’ are: [1, 4, 6]
Distinct elements in ‘b’ are: [5]
Union of ‘a’ and ‘b’ is: [1, 2, 3, 4, 5, 6]

**slove problem our own :** https://leetcode.com/problems/merge-sorted-array/description/

**brute force apporach:**
1. basically, we are taking an additional set/map - because the set stores the unique and in the acsending order. 
2. so i will run through the array1, i will store them in the set/map. 
3. similary, i will run through the array2 , i will store them. 

**code:**
```cpp
vector < int > sortedArray(vector < int > a, vector < int > b) {

    int n1 = a.size();
    int n2 = b.size();

    set<int> st;
    for(int i = 0; i<n1; i++){
        st.insert(a[i]);
    }
    for(int j = 0; j<n2; j++){
        st.insert(b[j]);
    }

    vector<int> unionArr;
    for(auto it: st){
        unionArr.push_back(st[it]);
    }

    return unionArr;
}
```
Tc : O(n1logn2) + O(n2longn2) + O(n1+n2)
sc : O(n1+n2) + O(n1+n2) : here the second is to return the array. 

**optimal apporach:**
1. so here the sorted word triggers to two pointers approach. 
2. create a temp vector, and running 2 pointers from array 1 and array 2. 

```cpp
vector < int > sortedArray(vector < int > a, vector < int > b) {
    int n1 = a.size();
    int n2 = b.size();
    int i = 0;
    int j = 0;
    vector<int> temp;

    while(i<n1 && j<n2)
    {
        
        if(a[i] <= b[j]){
            if( temp.size() == 0 || temp.back() != a[i]){
                temp.push_back(a[i]);
            }
            i++;
        }else{
            if( temp.size() == 0 || temp.back() != b[j]){
                temp.push_back(b[j]);
            }
            j++;
        }
    }
    while(i<n1){
        if( temp.size() == 0 || temp.back() != a[i]){
                temp.push_back(a[i]);
        }
        i++;
    }
    while(j<n2){
        if( temp.size() == 0 || temp.back() != b[j]){
                temp.push_back(b[i]);
        }
        j++;
    }

    return temp;
}
```
tc : O(n+m) => O(n)
sc : O(n+m) => worst case(here the unqiue)