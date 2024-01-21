# Hashing 
**Hashing in Data Structures:**

Hashing is a technique used in data structures to map data of arbitrary size to fixed-size values, typically for efficient data retrieval. It involves applying a hash function to a data item, which produces a hash code or hash value. This hash code is used as an index or address to access the data in a data structure like a hash table.

**How it's Used in Problem Solving:**

1. **Data Retrieval:** Hashing enables quick data retrieval by converting a key into an index. This is particularly useful in scenarios where you want to quickly find, insert, or delete elements from a collection.

2. **Hash Tables:** Hashing is the basis for hash tables, a data structure that allows efficient implementation of associative arrays or sets. It provides constant-time average complexity for basic operations like insertion, deletion, and lookup.

3. **Collision Handling:** Hashing also involves dealing with collisions, situations where two different keys produce the same hash code. Techniques like chaining or open addressing are employed to handle collisions and ensure efficient data storage and retrieval.

4. **Performance Improvement:** Hashing can significantly improve the performance of algorithms by reducing search times. For instance, in caching mechanisms or database indexing, hashing helps in locating data quickly.

In summary, hashing is a powerful concept in data structures that provides a fast and efficient way to organize and retrieve data, especially in scenarios where quick access and search times are crucial.



**Example for hashing:(Number Hashing)**
    
    Problem Statement : count the number of elements in the array using hashing. 

    ```
    #include<iostream>
    using namespace std;

    /*
    input: 
    5 // array size
    1 4 3 1 3 // array
    5 // number of elements to find
    1 // elements
    10
    3
    4 
    9

    output: (terminal)
    5
    1 4 3 1 3
    5
    1
    2 // freq 
    10
    0 //freq
    3
    2 // freq
    4
    1
    9
    0
    */

    int main()
    {
        int n,q,num;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        // pre-computation - hashing is done
        int hash[13] = {0};
        for(int i=0; i<n;i++){
            hash[arr[i]] += 1;
        }

        cin>>q;
        while(q--){
            cin>>num;
            cout<<hash[num]<<endl;
        }

    return 0;
    }
    ```

***Note : The maximum size of the int array you can declare inside the main is 10^6. If you decelared global you can decelared upto 10^7.***

***Note : The maximum size of the bool array you can declare inside the main is 10^7. If you decelared global you can decelared upto 10^8.***

**Example for hashing:(Character Hashing)**

Here we would be using ASCII values for character hashing. 

    ```
    A = 65 
    Z = 90 

    a = 97 
    z = 122
    ```

if you need to get the index for the character in the array 
we need to do. 

formula : char - 'a' = index

```
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int q;
    cin>>q;

    // pre-compute
    int hash[26] = {0};
    for(int i=0; i<s.size();i++){
        hash[s[i] - 'a']++;
    }

    while(q--){
        char c;
        cin >> c;
        cout<<hash[c - 'a']<<endl;
    }
return 0;
}
```

for all characters use size = 255 
for lowecase = char - 'a'
for upppercase = char  - 'A'

**NOTE : so we have some complications with array storing the size the array with 10^8 or something like this.so here the STL comes in cpp(maps/hashmaps) and collections in JAVA.**

## Maps : 
- It stores the number and the frequency in the pair like this. 

    mpp<number, frequency>

    ```
    #include<iostream>
    #include<map>
    using namespace std;

    /*
    input: 
    5 // array size
    1 4 3 1 3 // array
    5 // number of elements to find
    1 // elements
    10
    3
    4 
    9

    output: (terminal)
    5
    1 4 3 1 3
    5
    1
    2 // freq 
    10
    0 //freq
    3
    2 // freq
    4
    1
    9
    0
    */

    int main()
    {
        int n,q,num;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        // pre-computation - hashing is done
        map<int,int> mpp;
        for(int i=0;i<n;i++){
            mpp[arr[i]]++;
        }
        

        cin>>q;
        while(q--){
            cin>>num;
            cout<<mpp[num]<<endl;
        }
        cout<<mpp.max_size()<<endl;

    return 0;
    }

    ```
Time Complexity : Maps for fetching and storing takes -> O(log N)

In Unorderded Map for fetching and storing takes -> O(1) for best and worst case. 
O(N) - liner {worst case}

*** Note: Try to use mostly the unordered map first, if doesnt work then use ordered map next. ***

hashing 