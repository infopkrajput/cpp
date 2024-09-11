# Vectors 
In C++, vectors are a part of the Standard Template Library (STL) and are used to create dynamic arrays that can grow or shrink as needed. Unlike traditional arrays, the size of vectors can change automatically, and they provide many useful functions to manage elements.

### Basic Syntax:
To use a vector in C++, you need to include the `vector` header:
```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Declare a vector of integers
    vector<int> numbers;

    // Add elements to the vector
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    // Access and modify elements
    numbers[1] = 25;

    // Print elements
    for(int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }

    return 0;
}
```

### Key Functions of Vectors:
1. **push_back()** – Adds an element at the end.
2. **size()** – Returns the number of elements.
3. **empty()** – Checks if the vector is empty.
4. **at()** – Accesses an element with bounds checking.
5. **pop_back()** – Removes the last element.
6. **clear()** – Removes all elements.
7. **insert()** – Inserts elements at a specified position.
8. **erase()** – Removes elements from a specified position or range.
9. **resize()** – Changes the size of the vector.
10. **front() and back()** – Access the first and last elements.

### Example of Various Operations:
```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};  // Initializing vector

    numbers.push_back(6);  // Adding element at the end
    numbers.pop_back();    // Removing last element

    cout << "First element: " << numbers.front() << endl;
    cout << "Last element: " << numbers.back() << endl;

    // Using a range-based for loop
    for (int num : numbers) {
        cout << num << " ";
    }

    return 0;
}
```

Vectors are versatile and widely used in C++ for managing dynamic arrays. You can manipulate them using many built-in functions, making them very powerful for various programming needs.

## 1.push_back()
In C++, the `push_back()` function is a member function of the `vector` class that is used to add an element to the end of the vector. It increases the size of the vector by one and places the new element at the last position.

### Syntax:
```cpp
vector_name.push_back(value);
```

### Key Features:
- **Dynamically adds elements**: When you use `push_back()`, the vector resizes itself if necessary. If the current capacity is full, the vector automatically allocates more memory.
- **Time Complexity**: Typically, it's O(1) for most cases, but if the vector needs to resize (i.e., allocate more memory), it can be O(n) where `n` is the current size of the vector.

### Example:
```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers;

    // Adding elements using push_back()
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    // Output the elements
    cout << "Elements in the vector: ";
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
```

### Output:
```
Elements in the vector: 10 20 30
```

### How `push_back()` Works:
- If the vector has enough **capacity**, it will just add the element.
- If the vector doesn't have enough **capacity**, it reallocates memory, typically doubling its current capacity to accommodate more elements.

### Example to Observe Capacity Change:
```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers;
    
    cout << "Initial capacity: " << numbers.capacity() << endl;

    // Add elements and observe capacity changes
    for (int i = 1; i <= 10; i++) {
        numbers.push_back(i);
        cout << "Added " << i << ", Size: " << numbers.size() << ", Capacity: " << numbers.capacity() << endl;
    }

    return 0;
}
```

### Output (Sample):
```
Initial capacity: 0
Added 1, Size: 1, Capacity: 1
Added 2, Size: 2, Capacity: 2
Added 3, Size: 3, Capacity: 4
Added 4, Size: 4, Capacity: 4
Added 5, Size: 5, Capacity: 8
Added 6, Size: 6, Capacity: 8
Added 7, Size: 7, Capacity: 8
Added 8, Size: 8, Capacity: 8
Added 9, Size: 9, Capacity: 16
Added 10, Size: 10, Capacity: 16
```

Here you can see that `capacity()` increases when the vector needs more space.

### Summary:
- **`push_back()`** appends a new element to the end of the vector.
- It automatically manages memory, growing the vector when necessary.
- Useful for building dynamic arrays when the size of the array isn't known at compile time.

## 2.size()
In C++, when working with vectors, **size** and **capacity** are two important terms, and they represent different concepts:

### 1. **Size**:
- **Definition**: The number of elements currently stored in the vector.
- **Key point**: This represents how many elements are actually in the vector.
- **Usage**: You can retrieve the size of a vector using the `size()` function.
- **Example**:
  ```cpp
  vector<int> v = {1, 2, 3};
  cout << "Size: " << v.size();  // Output: 3
  ```

### 2. **Capacity**:
- **Definition**: The total number of elements that the vector can hold before it needs to allocate more memory (i.e., the space reserved in memory).
- **Key point**: Capacity can be larger than size, because vectors allocate extra memory to accommodate future growth and avoid reallocations for every element.
- **Usage**: You can get the capacity of a vector using the `capacity()` function.
- **Example**:
  ```cpp
  vector<int> v;
  v.push_back(1);
  cout << "Capacity: " << v.capacity();  // Output might be 1, 2, or more, depending on how the vector grows.
  ```

### Difference Between Size and Capacity:
- **Size** is the number of elements currently in the vector, while **Capacity** is the amount of space reserved for future elements.
- When you add elements to a vector and exceed its capacity, it will automatically allocate more memory (typically doubling its current capacity) to accommodate new elements.
  
### Example Demonstrating Size vs. Capacity:
```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    
    // Initially, the size is 0, but capacity may still be non-zero.
    cout << "Initial size: " << v.size() << endl;        // Output: 0
    cout << "Initial capacity: " << v.capacity() << endl;  // Output depends on the system

    // Add some elements
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    
    cout << "Size after adding elements: " << v.size() << endl;       // Output: 3
    cout << "Capacity after adding elements: " << v.capacity() << endl;  // Output depends on growth strategy

    return 0;
}
```

### Summary:
- **Size**: The actual number of elements in the vector (what you've inserted).
- **Capacity**: The amount of memory reserved by the vector for future elements (can be larger than the size).
  
Understanding this difference helps in optimizing performance, especially when dealing with large data sets. You can also manually reserve space for a vector to avoid frequent reallocations using the `reserve()` function.

