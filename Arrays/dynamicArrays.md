# Dynamic Arrays:

A dynamic array is a resizable array that can grow or shrink in size during program execution.
Unlike a static or fixed-size array, which has a predetermined size that cannot be changed,
a dynamic array allows flexibility in adjusting its size as needed. 
Dynamic arrays are often implemented using a combination of fixed-size arrays and dynamic memory allocation.

**Key Differences:**

1. **Size Flexibility:**
   - *Static Array:* Has a fixed size that is specified at the time of declaration.
   - *Dynamic Array:* Can dynamically resize itself during runtime.

2. **Memory Allocation:**
   - *Static Array:* Allocates memory at compile-time, and the size is fixed throughout the program execution.
   - *Dynamic Array:* Allocates memory at runtime, allowing for size adjustments as needed.

3. **Ease of Use:**
   - *Static Array:* Simple and straightforward but lacks flexibility.
   - *Dynamic Array:* More versatile, as it can adapt to changing storage requirements.

**Example:**

Let's compare a static array in C++ with a dynamic array using the standard library's `std::vector`.

**Static Array:**
```cpp
#include <iostream>

int main() {
    // Static array with a fixed size of 5
    int staticArray[5] = {1, 2, 3, 4, 5};

    // Access elements
    for (int i = 0; i < 5; ++i) {
        std::cout << staticArray[i] << " ";
    }

    return 0;
}
```

``` 
Python
import array

static_array = array.array('i', [30,40,50])

# Accessing elements
for element in static_array:
    print(element)

```

```
Python
we can use static array = tuples also(bcz tuples are immutable)

static_array = (1,2,3,5)

for element in static_array:
    print(element)
```



**Dynamic Array (using `std::vector`):**
```cpp
#include <iostream>
#include <vector>

int main() {
    // Dynamic array (vector) with an initial size of 5
    std::vector<int> dynamicArray = {1, 2, 3, 4, 5};

    // Access elements
    for (int i = 0; i < dynamicArray.size(); ++i) {
        std::cout << dynamicArray[i] << " ";
    }

    return 0;
}
```

***In c++***
In the dynamic array example, the `std::vector` can easily adjust its size as needed 
without requiring a fixed size at compile-time.


***Python - dynamic arrays - Lists***
in Python, the `list` data type is often referred to as a dynamic array. A Python list is a dynamic array because it can dynamically resize itself during runtime. This means you can easily add or remove elements, and the size of the list can change as needed.

Here's a simple example:

```python
# Creating a list
my_list = [1, 2, 3, 4, 5]

# Accessing elements
for element in my_list:
    print(element)

# Modifying the list dynamically
my_list.append(6)  # Adds 6 to the end of the list
my_list.remove(3)  # Removes the element 3 from the list

# Updated list
print(my_list)
```

In this example, you can see that the `list` in Python provides dynamic resizing capabilities, allowing you to add or remove elements without specifying a fixed size in advance. This dynamic behavior is one of the reasons why Python lists are often compared to dynamic arrays in other programming languages.
