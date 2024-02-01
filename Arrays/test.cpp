#include <iostream>
#include <vector>
#include <bits/stdc++.h> 
using namespace std;

vector<int> findArrayIntersection(std::vector<int> &arr1, int n, std::vector<int> &arr2, int m) {
    int i = 0;
    int j = 0;
    vector<int> ans;
    
    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            i++;
        } else if (arr2[j] < arr1[i]) {
            j++;
        } else {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
    }

    return ans;
}

int main() {
    // Provided Arrays
    int arr1[] = {1, 2, 2, 3, 4};
    int n = arr1.size();
    vector<int> arr2 = {2, 2, 3, 3};
    int m = arr2.size();

    // Finding Intersection
    vector<int> result = findArrayIntersection(arr1, n, arr2, m);

    // Output: {2, 3}
    cout << "Intersection: ";
    for (int num : result) {
        cout << num << " ";
    }

    return 0;
}
