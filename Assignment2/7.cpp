#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the length of the array: ";
    cin >> n;
    double A[100];
    cout << "Enter the elements:\n";
    for(int i=0; i<n; i++) {
        cin >> A[i];
    }

    int inversionCount = 0;
    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            if(A[i] > A[j]) {
                inversionCount++;
            }
        }
    }

    cout << "Number of inversions in the array: " << inversionCount << endl;
 
}