#include <iostream>
#include <stack>
using namespace std;
string revString(string s){
    stack<char>st;
    for(int i=0;i<s.length();i++){
        st.push(s[i]);
    }
    string Rev = "";
    while(!st.empty()){
        Rev += st.top();
        st.pop();
    }
    return Rev;
}
int main(){
    string s;
    cout<<"ENTER THE STRING ->";
    cin>>s;
    cout<<revString(s);
}
