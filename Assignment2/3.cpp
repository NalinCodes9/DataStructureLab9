#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter sorted array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int diff = arr[0] - 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] - i != diff) {
            cout << "Missing number: " <<i+ diff<< endl;
            break;
        }
    }
    return 0;
}
