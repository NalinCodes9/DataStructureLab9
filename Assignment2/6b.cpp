#include<iostream>
using namespace std ;
int main(){

    int sp1[5][3]={
        {3,3,4},{0,0,5},{0,2,2},{1,1,3},{2,0,1}
    };
    int sp2[5][3]={
        {3,3,4},{0,1,3},{1,0,1},{2,0,1},{2,2,1}
    };
    
    int add[100][3];
    int k=1;
    add[0][0] = sp1[0][0];
    add[0][1] = sp1[0][1];
    add[0][2] = 0;


    for(int i=1;i<=4;i++){
        for(int j=1;j<=4;j++){

            if(sp1[i][0]==sp2[j][0]){
              
               
                if(sp1[i][1]==sp2[j][1]){
                add[k][0]=sp1[i][0];
                add[k][1]=sp1[i][1];
                add[k][2]=sp1[i][2]+sp2[j][2];
                k++;
                break;
            }
            else {
                if(sp1[i][1]>sp2[j][1]){
                    add[k][0]=sp1[i][0];
                    add[k][1]=sp1[i][1];
                    add[k][2]=sp1[i][2];
                    k++;
                    // break;
                }
                else{
                    add[k][0]=sp2[j][0];
                    add[k][1]=sp2[j][1];
                    add[k][2]=sp2[j][2];
                    k++;
                    // break;
                }
               }
            }
            else {
                if(sp1[i][1]>sp2[j][1]){

                    add[k][0]=sp2[j][0];
                    add[k][1]=sp2[j][1];
                    add[k][2]=sp2[j][2];
                    k++;
                    break;
                }
                else{
                     if(sp1[i][1]<sp2[j][1]){

                         add[k][0]=sp1[i][0];
                         add[k][1]=sp1[i][1];
                         add[k][2]=sp1[i][2];
                         k++;
                         break;
                        }
                }
                
            }
    
        }
    }
        add[0][2]=k-1;
        for(int i=0;i<k-1;i++){
           
                
                cout<<add[i][0]<<" "<<add[i][1]<<" "<<add[i][2]<<" "<<endl;    
            
    }
}