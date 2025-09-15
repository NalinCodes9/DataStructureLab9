#include <iostream>
#include <stack>
using namespace std;

int control(string s)
{
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')' || s[i] == '}' || s[i] == ']')
        {
            if (st.empty())
            {
                return false;
            }
            char top = st.top();
            st.pop();
            if ((s[i] == ')' && top != '(') ||
                (s[i] == '}' && top != '{') ||
                (s[i] == ']' && top != '['))
            {
                return false;
            }
        }
    }
    return st.empty();
}

int main()
{
    string s;
    cout << "ENTER THE EXPRESSION :- ";
    cin >> s;
    if (control(s))
    {
        cout << "EXPR HAS BALANCED PARENTHESIS";
    }
    else
    {
        cout << "EXPR doesn't HAVE BALANCED PARENTHESIS";
    }
}
