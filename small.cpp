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