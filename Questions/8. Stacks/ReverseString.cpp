#include <iostream>
#include <stack>

using namespace std;

int main()
{
    string s = "abcde";
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        st.push(s[i]);
    }
    s="";
    while(!st.empty()){
        s.push_back(st.top());
        st.pop();
    }

    cout << s;
    return 0;
}