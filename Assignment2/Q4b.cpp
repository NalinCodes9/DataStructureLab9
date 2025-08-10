#include <iostream>
#include <string>
using namespace std;
int main(){
    string stri;
    cout<<"Enter a string "<<endl;
    getline(cin,stri);
    int low=0;
    int high=stri.length()-1;
    while(low<high){
        char t=stri[high];
        stri[high]=stri[low];
        stri[low]=t;
        low++;
        high--;
    }
    cout<<"Reversed String : "<<stri;
}
