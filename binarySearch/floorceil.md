# Problem Statement
You're given a sorted array 'a' of 'n' integers and an integer 'x'.

Find the floor and ceiling of 'x' in 'a[0..n-1]'.

Note:
Floor of 'x' is the largest element in the array which is smaller than or equal to 'x'.
Ceiling of 'x' is the smallest element in the array greater than or equal to 'x'.

Example:
Input: 
n=6, x=5, a=[3, 4, 7, 8, 8, 10]   

Output:
4, 7

Explanation:
The floor and ceiling of 'x' = 5 are 4 and 7, respectively.

Sample Input 1 :
6 8
3 4 4 7 8 10


Sample Output 1 :
8 8


Explanation of sample input 1 :
Since x = 8 is present in the array, it will be both floor and ceiling.

**try yourself:**https://www.codingninjas.com/studio/problems/ceiling-in-a-sorted-array_1825401?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

**apporach:**
1. so for the ceil of the element , it is finding out the lowerBound(smallestElementIndex >= x)
2. for the floor (smallestElementIndex < x)

**code:**
```cpp
int Findceil(vector<int> &arr, int n, int x){
	int ans = -1;
	int first = 0;
	int last = n - 1;
	while(first <= last){
		int mid = first + (last - first) / 2;

		if(arr[mid] >= x){
			ans = arr[mid];
			last = mid - 1;
		}else{
			first = mid + 1;
		}
	}
	return ans;
}

int Findfloor(vector<int> &arr, int n, int x){
	int ans = -1;
	int first = 0;
	int last = n - 1;
	while(first <= last){
		int mid = first + (last - first) / 2;

		if(arr[mid] <= x){
			ans = arr[mid];
			first = mid + 1;
		}else{
			last = mid - 1;
		}
	}
	return ans;
}

pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	// Write your code here.
	// pair<int, int> ans;
	int f = Findfloor(a, n, x);
	int c = Findceil(a,n, x);
	return make_pair(f,c);
}
```

tc : 2Ologn => O(logn)
sc : constant
