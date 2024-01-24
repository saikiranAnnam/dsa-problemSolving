# Recursion
Recursion in programming is a technique where a function calls itself in its own definition until the condtion is met.

It involves breaking down a problem into smaller, similar subproblems and solving them iteratively until a base case is reached, at which point the recursion stops. Recursion is particularly useful for tasks that can be naturally divided into smaller instances of the same problem.

## NOTE : 
In the context of recursion, a "stack overflow" occurs when the call stack, a region of memory used to manage function calls and their variables, becomes full due to excessive recursive function calls. 
Each recursive call adds a new frame to the stack, and if the stack becomes too deep without reaching a base case to stop the recursion, it can lead to a stack overflow.
In short, a stack overflow in recursion happens when the call stack runs out of space due to an uncontrolled or excessive number of recursive function calls, causing the program to crash or terminate abruptly.

**Recursion has two types**
- Parameterised Recursion
- Functional Recursion 

***Parameterized Recursion:***
Parameterized recursion refers to a recursive function where parameters are passed to each recursive call, 
contributing to the problem-solving process. The parameters change with each recursive call, 
allowing the function to handle different instances of the problem.

Example in Python:

```python
def factorial(n):
    # Base case
    if n == 0 or n == 1:
        return 1
    # Recursive case with parameters
    else:
        return n * factorial(n-1)

# Example usage
result = factorial(5)
print(result)  # Output: 120
```

In this example, the `factorial` function takes a parameter `n`, and with each recursive call, it multiplies `n` with the result of the factorial of `(n-1)`.

***Functional Recursion:***
Functional recursion involves defining a function within its own body, creating a recursive structure where the function is redefined in terms of itself.

Example in Python:

```python
# Functional recursion example
def recursive_power(x, n):
    # Base case
    if n == 0:
        return 1
    # Recursive case defined within the function
    else:
        return x * recursive_power(x, n-1)

# Example usage
result = recursive_power(2, 3)
print(result)  # Output: 8
```

In this example, `recursive_power` calculates `x` raised to the power of `n` using functional recursion. The function calls itself with reduced values of `n` until the base case is reached.