#include<iostream>
#include<string>
using namespace std;
int main(){
    char ch;
    cout<<"Enter any character in upper case"<<endl;
    cin>>ch;
    ch=ch+32;//Refer Ascii Table
    cout<<"Character in lower case : "<<ch;
}
