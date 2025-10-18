#include <iostream>
#include <vector>
using namespace std;

int maxSlidingWindowSum(vector<int>& arr, int k) {
    int n = arr.size();

    // Step 1: Handle edge case if array size < k
    if (n < k) {
        cout << "Window size is larger than the array!" << endl;
        return -1;
    }

    // Step 2: Calculate the sum of the first window
    int windowSum = 0;
    for (int i = 0; i < k; i++) {
        windowSum += arr[i];
    }

    // Step 3: Initialize maxSum with first window sum
    int maxSum = windowSum;

    // Step 4: Slide the window one element at a time
    for (int i = k; i < n; i++) {
        // Add new element (arr[i])
        // Remove the element that goes out of window (arr[i - k])
        windowSum += arr[i] - arr[i - k];

        // Update maxSum if current windowSum is bigger
        maxSum = max(maxSum, windowSum);
    }

    return maxSum;
}

int main() {
    vector<int> arr = {2, 1, 5, 1, 3, 2 };
    int k = 3;

    int result = maxSlidingWindowSum(arr, k);
    cout << "Maximum sum of subarray of size " << k << " is: " << result << endl;

    return 0;
}

