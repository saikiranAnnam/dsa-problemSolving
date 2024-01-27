## Problem statement
You have been given an array ‘a’ of ‘n’ unique non-negative integers.

Find the second largest and second smallest element from the array.
Return the two elements (second largest and second smallest) as another array of size 2.

Example :
Input: ‘n’ = 5, ‘a’ = [1, 2, 3, 4, 5]
Output: [4, 2]

The second largest element after 5 is 4, and the second smallest element after 1 is 2.

check this link for explaination- (https://takeuforward.org/data-structure/find-second-smallest-and-second-largest-element-in-an-array/)

**Brute force**
```python
def getSecondOrderElements(n: int,  a: [int]) -> [int]:
    # Write your code here.
    a.sort()
    largest_element = a[n-1]
    smallest_element = a[0]
    secondLargestEle = -1
    secondsmallestEle = 1000
    ans = []
    for i in range(n-2, -1, -1):
        if a[i] != largest_element:
            secondLargestEle = a[i]
            ans.append(secondLargestEle)
            break
    for i in range(1,n-1):
        if a[i] != smallest_element:
            secondsmallestEle= a[i]
            ans.append(secondsmallestEle)
            break
    return ans
```

**Optimal approach**
```cpp



#include<bits/stdc++.h>
using namespace std;
int secondSmallest(int arr[],int n)
{
    if(n<2)
        return -1;
    int small = INT_MAX;
    int second_small = INT_MAX;
    int i;
    for(i = 0; i < n; i++) 
    {
       if(arr[i] < small)
       {
          second_small = small;
          small = arr[i];
       }
       else if(arr[i] < second_small && arr[i] != small)
       {
          second_small = arr[i];
       }
    }
   return second_small;     
}
int secondLargest(int arr[],int n)
{
	if(n<2)
	return -1;
    int large=INT_MIN,second_large=INT_MIN;
    int i;
    for (i = 0; i < n; i++) 
    {
        if (arr[i] > large) 
        {
            second_large = large;
            large = arr[i];
        }
 
        else if (arr[i] > second_large && arr[i] != large) 
        {
            second_large = arr[i];
        }
    }
    return second_large;                
}

int main() {
    int arr[]={1,2,4,7,7,5};  
    int n=sizeof(arr)/sizeof(arr[0]);
        int sS=secondSmallest(arr,n);
        int sL=secondLargest(arr,n);
    cout<<"Second smallest is "<<sS<<endl;
    cout<<"Second largest is "<<sL<<endl;
    return 0;
}

```