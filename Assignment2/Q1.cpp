#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int target) {
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid =( left + right)  / 2;

        if (arr[mid] == target)
            return mid; //  found
        else if (arr[mid] < target)
            left = mid + 1; // Search right half
        else
            right = mid - 1; // Search left half
    }

    return -1; //  not found
}

int main() {
    int data[] = {2, 4, 6, 8, 10, 12, 14};
    int n = sizeof(data) / sizeof(data[0]);
    int target = 10;

    int result = binarySearch(data, n, target);

    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}

