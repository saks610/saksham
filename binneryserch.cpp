#include<iostream>
using namespace std;

class solution {
public:
    int binary(int arr[], int n, int ele) {
        int low = 0;
        int high = n - 1;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;  // Correct mid calculation
            
            if (arr[mid] == ele) {
                return mid;  // Element found, return index
            }
            else if (ele < arr[mid]) {
                high = mid - 1;  // Search left half
            }
            else {
                low = mid + 1;  // Search right half
            }
        }
        
        return -1;  // Element not found
    }
};

int main() {
    solution s1;
    int arr[] = {2, 3, 4, 56, 67, 78, 90, 100};
    int n = 8;
    int el = 67;

    int result = s1.binary(arr, n, el);  // Perform binary search

    if (result != -1) {
        cout << "Element " << el << " found at index " << result << endl;
    } else {
        cout << "Element " << el << " not found" << endl;
    }
    
    return 0;
}

