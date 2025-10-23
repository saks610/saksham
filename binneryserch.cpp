#include<iostream>
using namespace std;

class solution {
public:
    int binary(int arr[], int n, int ele) {
        int low = 0;
        int high = n - 1;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;  
            
            if (arr[mid] == ele) {
                return mid; 
            }
            else if (ele < arr[mid]) {
                high = mid - 1; 
            }
            else {
                low = mid + 1;  
            }
        }
        
        return -1;  
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

