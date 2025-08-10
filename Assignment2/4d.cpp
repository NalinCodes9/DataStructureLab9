#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter string in similar case";
    getline(cin,str);
    int n=str.length();
    for(int pass=0 ; pass<n-1 ; pass++){
        for(int i=0 ; i<n-pass-1 ; i++){
            if( (int)str[i+1] < (int)str[i]){
                char t=str[i+1];
                str[i+1]=str[i];
                str[i]=t;
            }
        }
    }
    cout<<"String in alphabetical order "<<str;
}