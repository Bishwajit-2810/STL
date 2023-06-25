#include <bits/stdc++.h>
using namespace std;

//  it's a c++ container
// follows the LIFO rule

void explain_stack()
{

    stack<int> st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.emplace(6);

    cout << "top element : " << st.top() << endl;
    cout << "size : " << st.size() << endl;
    cout << "is stack empty : " << st.empty() << endl;

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;

    stack<int> s1, s2;
    s1.swap(s2);
}

int main()
{

    explain_stack();
}