#include <iostream>
#include <vector>


int findSmallest(const std::vector<int>& arr) {
    if (arr.empty()) {
        std::cout << "Error: Array is empty." << std::endl;
        return -1; 
    }

    int min_val = arr[0];
    for (size_t i = 1; i < arr.size(); ++i) {
        if (arr[i] < min_val) {
            min_val = arr[i];
        }
    }

    return min_val;
}

int main() {

    std::vector<int> numbers = {10, 5, 8, 1, 12};

    int result = findSmallest(numbers);

    if (result != -1) {
        std::cout << "Smallest number: " << result << std::endl;
    }

    return 0;
}
