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
    - pair<data_type1, data_type2> name(intial_values)
    - data_type1: datatype of the first value
    - data_type2: datatype of the second value
    - initial_values: optional parameter which initializes the pair with the given values

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
2. **vectors** 

    Vectors in STL are basically dynamic arrays that have the ability to change size whenever elements are added or deleted from them. Vector elements can be easily accessed and traversed using iterators. A vector stores elements in contiguous memory locations

    *** syntax ***
    vector<object_type> variable_name;

    example: 
    - vector<int> v1;
    - vector<char> v2;
    - vector<string> v3;

    *** Most used functions in the vectors are ***

    - Iterators
        -- begin() – Returns an iterator pointing to the first element in the vector
        -- end() – Returns an iterator pointing to the theoretical element that follows the last element in the vector

        example : 
        auto iterator = itr;
        itr = v1.begin();

        ```
        vector<int> :: iterator it = v.begin();
        ```

        auto iterator = itr;
        itr = v1.end();

        ```
        vector<int>::iterator it = v.end();
        ```

    - Modifiers
        -- assign() – It assigns new value to the vector elements by replacing old ones
        -- push_back() – It push the elements into a vector from the back
        -- pop_back() – It is used to pop or remove elements from a vector from the back.
        -- insert() – It inserts new elements before the element at the specified position
        -- erase() – It is used to remove elements from a container from the specified position or range.
        -- swap() – It is used to swap the contents of one vector with another vector of same type. Sizes may differ.
        -- clear() – It is used to remove all the elements of the vector container
        -- emplace() – It extends the container by inserting new element at position
        -- emplace_back() – It is used to insert a new element into the vector container, the new element is added to the end of the vector

        example : 
        ```
        vector<int> v1;
        v1.push_back(1);
        v1.push_back(2);

        auto it= v1.begin();
        v1.insert(it,5); //inserting 5 at the beginning

        vector<int> v1;
        auto it= v1.begin();
        v1.erase(it);// erasing the first element
        
        v1.pop_back();

        v1.front();

        v1.back();

        v1.empty(); //returns true or false if the vector is empty. 

        v1.size(); //returns the size of the vector.

        ```

    - Element Access  
    
        -- reference operator [g] – Returns a reference to the element at position ‘g’ in the vector
        -- at(g) – Returns a reference to the element at position ‘g’ in the vector
        -- front() – Returns a reference to the first element in the vector
        -- back() – Returns a reference to the last element in the vector
        
        -- example 
        ```
            vector<int> v1; {}
            v1.size(); //0 

            vector<int> v1; // {10,20,30}
            v1.front() //10
            v1.back() //30
            v1[2] // 20
            v1.at(2) //20

        ```
    - Capacity

        -- size() – Returns the number of elements in the vector.
        -- max_size() – Returns the maximum number of elements that the vector can hold.
        -- capacity() – Returns the size of the storage space currently allocated to the vector expressed as number of elements.
        -- resize(n) – Resizes the container so that it contains ‘n’ elements.
        -- empty() – Returns whether the container is empty.
        -- shrink_to_fit() – Reduces the capacity of the container to fit its size and destroys all elements beyond the capacity.
        -- reserve() – Requests that the vector capacity be at least enough to contain n elements.

        example
        ```
        vector<int>v1(3,10); // {3,10,20}
        v1.size() // 3
        v1.max_size // 4611686018427387903
        v1.capacity() // 3
        v1.empty() // 0 - false
        ```
3. **Stack** -
    A stack is a non-primitive linear data structure.
    It is an ordered list in which the addition of a new data item and deletion of the already existing data item is done from only one end known as the top of the stack (TOS). 
    The element which is added in last will be first to be removed and the element which is inserted first will be removed in last. As all the deletion and insertion in a stack are done from the top of the stack, the last added element will be the first to be removed from the stack. 
    That is the reason why stack is also called Last-in-First-out (LIFO).

    ***syntax***
    stack<object_type> variable_name;
    ```
    stack<int> st;
    stack.push(1);

    stack<pair<int,int>> st;
    st.push(make_pair(1,2));
    st.top().second(); //2
    ```

    ***Stack function***
    1. push() – to insert an element in the stack.
    2. pop() – deletes the last element of the stack.
    3. top() – returns the element at the top of the stack.
    4. emplace() – to insert an element in the stack.
    5. size() – returns the number of elements on the stack.
    6. empty() – to check if the stack is empty or not.

3. **Queue** - 
    A queue is a linear list of elements in which deletions can take place only at one end called the front, and insertions can take place only at the end called the rear. 
    The queue is a First In First Out type of data structure (FIFO), the terms FRONT and REAR are used in describing a linear list only when it is implemented as a queue.

    ***syntax***
    queue<object_type> variable_name; 

    ***Functions***
    1. push() – to insert an element in the queue.
    2. pop() – deletes the first element of the queue.
    3. front() – returns a reference to the first element of the queue.
    4. back() – returns a reference to the last element of the queue.
    5. emplace() – to insert an element in the queue.
    6. size() – returns the number of elements on the queue.
    7. empty() – to check if the queue is empty or not.

4. **Set** - 
    A set in STL is a container that stores unique elements in a particular order. Every operation on a set takes O(1) complexity in the average case and takes O(n) in the worst case.

    *** NOTE : Set elements are unique and sorted in order ***
    
    *** Syntax: ***
    set<object_type> variable_name;
    
    Example:
    set<int> s;
    set<string> str;

    *** Functions in set: ***
    1. insert() – to insert an element in the set.
    
    ```
    set<int> s;
    s.insert(1);
    s.insert(2);
    ```
    2. begin() – return an iterator pointing to the first element in the set.
    3. end() – returns an iterator to the theoretical element after the last element.
    4. count() – returns true or false based on whether the element is present in the set or not.
    5. clear() – deletes all the elements in the set.
    6. find() – to search an element in the set.
    7. erase() – to delete a single element or elements between a particular range.
    8. size() – returns the size of the set.
    9. empty() – to check if the set is empty or not.
5. 
