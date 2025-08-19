#include <iostream>
using namespace std;
int main(){
    int sparsematrix[4][5]=
    {
        {1,0,0,3,0},
        {0,0,5,6,1},
        {0,7,0,0,0},
        {0,5,5,0,0}
    };
    int size=0;
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            if(sparsematrix[i][j]!=0){
                size++;
            }
        }
    }
    int k=0;
    //created triplet R C VAL FOR NON-ZERO ENTERIES
    int compressedmatrix[20][3];
     for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            if(sparsematrix[i][j]!=0){
                compressedmatrix[k][0]=i;
                compressedmatrix[k][1]=j;
                compressedmatrix[k][2]=sparsematrix[i][j];
                k++;
            }
        }
    }
    //PRINT TRIPLET REPRESENTATION OF MATRIX
    for(int i=0 ; i<size ; i++){
        for(int j=0 ; j<3; j++){
            cout<<compressedmatrix[i][j]<<" ";
        }
        cout<<endl;
    }
    int TransposeM[20][3];
    k=0;
    for (int col = 0; col < 5; col++) {      
    for (int i = 0; i < size; i++) {      
        if (compressedmatrix[i][1] == col) {       
            TransposeM[k][0] = compressedmatrix[i][1]; 
            TransposeM[k][1] = compressedmatrix[i][0];
            TransposeM[k][2] = compressedmatrix[i][2];
            k++;
    }
}
    }
    cout<<endl<<endl<<"Transpose Matrix :"<<endl;
    //PRINT TRIPLET REPRESENTATION OF MATRIX
    for(int i=0 ; i<size ; i++){
        for(int j=0 ; j<3; j++){
            cout<<TransposeM[i][j]<<" ";
        }
        cout<<endl;
    }

}
