#include <iostream> 
using namespace std; 
 
int main() { 
    int row1, col1, row2, col2; 
 
    cout << "Enter rows and columns for first matrix: "; 
    cin >> row1 >> col1; 
    cout << "Enter rows and columns for second matrix: "; 
    cin >> row2 >> col2; 
 
    if (col1 != row2) { 
        cout << "Matrix multiplication not possible. Columns of first matrix 
must equal rows of second.\n"; 
        return 0; 
    } 
 
    int mat1[100][100], mat2[100][100], result[100][100] = {0}; 
 
    cout << "Enter elements of first matrix:\n"; 
    for (int i = 0; i < row1; ++i) 
        for (int j = 0; j < col1; ++j) 
            cin >> mat1[i][j]; 
 
    cout << "Enter elements of second matrix:\n"; 
    for (int i = 0; i < row2; ++i) 
        for (int j = 0; j < col2; ++j) 
            cin >> mat2[i][j]; 
 
    for (int i = 0; i < row1; ++i) 
        for (int j = 0; j < col2; ++j) 
            for (int k = 0; k < col1; ++k) 
                result[i][j] += mat1[i][k] * mat2[k][j]; 
 
    cout << "Resultant matrix:\n"; 
    for (int i = 0; i < row1; ++i) { 
        for (int j = 0; j < col2; ++j) 
            cout << result[i][j] << " "; 
        cout << endl; 
    } 
 
    return 0; 
}