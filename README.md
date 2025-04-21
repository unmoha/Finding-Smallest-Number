# 🔽 Find the Smallest Number in a Vector (C++)

This C++ program defines a simple function that finds and returns the smallest integer in a given vector of integers. If the vector is empty, it displays an error message.

---

##  Description

The program includes:

- A function `findSmallest()` that:
  - Takes a `std::vector<int>` as input.
  - Returns the smallest number in the vector.
  - Returns `-1` and displays an error message if the vector is empty.
  
- A `main()` function that demonstrates how to use `findSmallest()`.

---

##  Function Overview

```cpp
int findSmallest(const std::vector<int>& arr);
Parameters: A vector of integers.

Returns: The smallest integer in the vector, or -1 if the vector is empty.

Error Handling: Displays an error message if the vector is empty.

 Requirements
C++11 or later

A C++ compiler such as g++, clang++, or MSVC

 How to Compile and Run
 Compile
g++ -std=c++11 -o find_smallest main.cpp
Run

./find_smallest
 Example Output
Given the following input vector

std::vector<int> numbers = {10, 5, 8, 1, 12};
The program will output:
Smallest number: 1
If the vector is empty:
Error: Array is empty.

main.cpp – Contains the full program including the function and the main function for testing.
This code is free to use and modify for educational or personal use.
Created by [Anwar mohammed] — feel free to modify and expand!

Let me know if you'd like to add user input, sort the vector, or include multiple test cases in the README!







