# Arrays

## Introduction
1. An array is a data structure for storing more than one data item that has a similar data type.

2. Contingous area of memory consisting of equal size of elements indexed by continguos integers. 

3. The items of an array are allocated at adjacent memory locations. These memory locations are called elements of that array. The total number of elements in an array is called length.

## what makes array so special

1. Elements are stored at contiguous memory locations.
2. An index is always less than the total number of array items.
3 . In terms of syntax, any variable that is declared as an array can store multiple values.
4. Almost all languages have the same comprehension of arrays but have different ways of declaring and initializing them.
5. However, three parts will always remain common in all the initializations, i.e., array name, elements, and the data type of elements.
6. constant time access. 
7. arrays are best for storing mutliple values in a single variable. 

### Creating an Array in Python

declare an array in python.
```arrayName = array.array('type code for data type', [array items])```
    arrayname  module method.  typecode                 elements 


1. Identifier: specify a name like usually, you do for variables
2. Module: Python has a special module for creating arrays, called “array” – you must import it before using it
3. Method: the array module has a method for initializing the array. It takes two arguments, typecode, and elements.
4. Type Code: specify the data type using the typecodes available (see list below)
5. Elements: specify the array elements within the square brackets, for example [130,450,103]


example : 

``` 
 import array
 balance = array.array('i', [300,200,100])
 print(balance)
```
- to access a specific array value : arrayName[indexNum]
ex : balance[1]

## Array Operations 

### Insert
With this operation, you can insert one or more items into an array at the beginning, end, or any given index of the array. This method expects two arguments index and value.

syntax :

``` arrayName.insert(index, value) ```

example : 

```
import array
balance = array.array('i', [300, 200, 100])
balance.insert(2, 150)
print(balance)

output : array('i', [300,200,150,100])
```

### Delete
With this operation, you can delete one item from an array by value. This method accepts only one argument, value. After running this method, the array items are re-arranged, and indices are re-assigned.

syntax : 
``` arrayName.remove(value) ```

example : 
```
import array
balance = array.array('i', [300,200,100])
balance.insert(2, 150)
print(balance)
balance.remove(150)
print(balance)

output : array('i', [300,200,100])
```

### Search
With this operation, you can search for an item in an array based on its value. This method accepts only one argument, value. This is a non-destructive method, which means it does not affect the array values.

synatx : 
``` arrayName.index(value) ```

example : 
```
import array
balance = array.array('i', [300,200,150,100])
print(balance.index(150))

output : 2
```
### Update
This operation is quite similar to the insert method, except that it will replace the existing value at the given index. This means will simply assign a new value at the given index. This method expects two arguments index and value.

syntax : ``` arrayName.update(index, value) ```

example : 
``` 
import array
balance = array.array('i', [300,200,150,100])
balance[2] = 145
print(balance)

output : array('i', [300,200,145,100]) 
```

### Traverse
You can traverse a python array by using loops, like this one:

example : 
```
import array
balance = array.array('i', [300,200,100])
for x in balance:
	print(x)

output : 
300
200
100

```

## Ways to declare an Array in c++

decelarion of an array. 

syntax : ``` dataType arrayName[arraySize]; ```

example : 
``` int balance[] = { 300, 200, 100 }; ```

Declaration by Size and Initialization Array Items

syntax : 
```dataType arrayName[arraySize] = {array, items}; ```

example : 
```int balance[3] = {300, 200, 100};```

How to access a specfic array value ? 
``` arrayName[indexNum] ```

## Array Operations in C++ 

Unlike Python, in C++ you have to program the logic yourself for performing the insert, delete, search update and traverse operations on C++ arrays.

### Insert
The logic for insertion operation goes as follows: 
- loop through the array items. 
- shift them to a greater index. 
- add a new array item at a given index.

```
#include <iostream>
#include <stdio.h>

main() {
   int pos = 2;
   int size = 4;
   int balance[] = {300,200,100,50,0};
   
   printf("BEFORE INCREMENT: \n");
   for(int i = 0; i<5; i++) {
      printf("%d\n",balance[i]);
   }

   /* FOR SHIFTING ITEMS TO A GREATER INDEX */
   for(int i = size; i >= pos; i--) {
       balance[i+1]=balance[i];
   }

   /* FOR INSERTING VALUE AT OUR DESIRED INDEX */   
   balance[pos] = 150;
   
   printf("AFTER INCREMENT: \n");
   

   /* FOR PRINTING THE NEW ARRAY */   
   for(int i = 0; i<6; i++) {
      printf("%d\n",balance[i]);
   }
}

output:

BEFORE INCREMENT
300
200
100
50
0

AFTERINCREMENT
300
200
150
100
50
0

```

