## what is STL ?
The Standard Template Library (STL) is a set of C++ template classes 
to provide common programming data structures and 
functions such as lists, stacks, arrays, etc.

It is a library of container classes, functions, algorithms, and iterators.


**Containers**

1. **pairs:**
    - Pairs in C++ are containers that allow us to store two values as a single element. The values may or may not be of the same data type. Pairs store values as {first, second}, the order of values is fixed. The values can be accessed using the dot operator followed by keywords.
    - The first value can be accessed using the first keyword and the second value can be accessed using the second keyword.
    - Pair is present in #include<utility> header file.
    - They are useful when we have to return two values from a function.

    ***syntax:***
    pair<data_type1, data_type2> name(intial_values);
    data_type1: datatype of the first value
    data_type2: datatype of the second value
    initial_values: optional parameter which initializes the pair with the given values

    example : 
    - pair <int, string> p; //initializes a pair which has first value as integer and second value as string
    - pair <int, string> p(1, "one); //initializes a pair with initial values as {1, one}

    **some code examples:**
    example 1:
    ```
    #include<iostream>
    #include<utility>
    using namespace std;

    void explainPair()
    {
        pair<int, int> p = {1, 3};
        cout<< p.first<< "  "<< p.second; // 1 3

        pair<int, pair<int , int>> p = {1, {2,3}};
        cout<<p.first<< " "<< p.second.second <<" "<< p.second.first;

        pair<int, int> arr[] = {{1,2}, {3,4}, {4,5}};
                            //   0      1      3
        cout<<arr[1].second; //4

    }

    ``` 