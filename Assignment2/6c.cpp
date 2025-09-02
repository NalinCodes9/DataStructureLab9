#include<iostream>
using namespace std;
int main() {
    int sp1[4][3] = {
        {3,3,3},{0,0,1},{1,1,2},{2,2,3}
    };
    int sp2[4][3] = {
        {3,3,3},{0,1,4},{1,2,5},{2,0,6}
    };


    int mul[20][3];
    int k = 1;

    mul[0][0] = sp1[0][0];
    mul[0][1] = sp2[0][1];
    mul[0][2] = 0;

    for(int i=1; i<=sp1[0][2]; i++) {
        for(int j=1; j<=sp2[0][2]; j++) {
            if(sp1[i][1] == sp2[j][0]) {
                mul[k][0] = sp1[i][0];
                mul[k][1] = sp2[j][1];
                mul[k][2] = sp1[i][2] * sp2[j][2];
                k++;
            }
        }
    }

    mul[0][2] = k-1;

    cout << "Resultant Sparse Matrix after Multiplication:" << endl;
    for(int i=0; i<k; i++) {
        cout << mul[i][0] << " " << mul[i][1] << " " << mul[i][2] << endl;
    }
}