# pair 
In C++, a `pair` is a container that holds two values of possibly different types. It is part of the C++ Standard Library (`<utility>` header) and is mainly used to store and return two values as a single unit.

### Basic Syntax:
To use `pair`, you need to include the `utility` header:
```cpp
#include <iostream>
#include <utility>  // Required for pair
using namespace std;

int main() {
    // Create a pair of an integer and a string
    pair<int, string> student;

    // Assign values to the pair
    student.first = 1;
    student.second = "John";

    // Access the pair values
    cout << "Roll number: " << student.first << endl;
    cout << "Name: " << student.second << endl;

    return 0;
}
```

### Key Components of a `pair`:
- **first**: Refers to the first element of the pair.
- **second**: Refers to the second element of the pair.

### Initializing a Pair:
You can initialize a pair in different ways:
1. **Default constructor**:
   ```cpp
   pair<int, string> student;
   ```
2. **Parameterized constructor**:
   ```cpp
   pair<int, string> student(1, "John");
   ```
3. **Using `make_pair()` function**:
   ```cpp
   pair<int, string> student = make_pair(1, "John");
   ```

### Example of Using a `pair`:
```cpp
#include <iostream>
#include <utility>
using namespace std;

int main() {
    // Using make_pair to create a pair
    pair<int, string> student = make_pair(101, "Alice");

    // Accessing the pair
    cout << "Roll Number: " << student.first << endl;
    cout << "Name: " << student.second << endl;

    // Another pair with different data types
    pair<string, double> product = make_pair("Laptop", 59999.99);

    cout << "Product: " << product.first << endl;
    cout << "Price: " << product.second << endl;

    return 0;
}
```

### Common Use Cases:
- **Returning multiple values from a function**:
  You can use a pair to return two values from a function.
  ```cpp
  pair<int, int> getMinMax(int a, int b) {
      if (a < b) return make_pair(a, b);
      else return make_pair(b, a);
  }
  ```
- **Storing key-value pairs**:
  Often used in conjunction with data structures like maps to store key-value pairs.

Pairs are simple and efficient when you need to work with two related values in C++.