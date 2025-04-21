# Finding-Smallest-Number# 🔽 Find Smallest Element in a Vector (C++)

This project contains a simple C++ function that finds the smallest integer in a `std::vector<int>`. It includes basic error handling for empty input vectors.

---

## Function Overview

### `int findSmallest(const vector<int>& arr);`

- **Purpose:** Returns the smallest integer in the provided vector.
- **Error Handling:** Throws `std::invalid_argument` if the vector is empty.

---

## File Contents

- `main.cpp` – Contains the `findSmallest` function and a sample usage in `main()`.

---

##  Example Usage

```cpp
#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

int findSmallest(const vector<int>& arr) {
    if (arr.empty()) {
        throw invalid_argument("Array is empty");
    }
    int min_val = arr[0];
    for (int num : arr) {
        if (num < min_val) {
            min_val = num;
        }
    }
    return min_val;
}

int main() {
    vector<int> numbers = {15, 3, 7, 9, 2, 18};

    try {
        int smallest = findSmallest(numbers);
        cout << "Smallest number: " << smallest << endl;
    } catch (const invalid_argument& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}
 Output Example
Smallest number: 2
 How to Compile and Run
Make sure you have a C++ compiler installed (like g++).

Compile:
bash
Copy
Edit
g++ -std=c++11 -o find_smallest main.cpp
Run:
bash
Copy
Edit
./find_smallest
 Requirements
C++11 or later

C++ compiler (g++, clang++, or MSVC)

 Error Handling
If the vector is empty, the function will throw an exception:

javascript
Error: Array is empty
 License
This code is free to use and modify for educational and personal use.