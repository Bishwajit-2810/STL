#include <bits/stdc++.h>
using namespace std;

//  it's a c++ container
// sorted order
// stores unique

void explain_set()
{

    set<int> st;
    st.insert(1);
    st.insert(3);
    st.insert(6);
    st.insert(5);
    st.insert(7);
    st.insert(6);
    st.insert(2);
    st.insert(4);

    int ct = st.count(3); // return 1 if there or else return 0

    auto it5 = st.find(3); // found return a itrator pointer
    auto it6 = st.find(9); // not found return st.end() a position after last element

    st.erase(5); // erase 5 from the set

    auto it1 = st.find(3);
    auto it2 = st.find(6);
    st.erase(it1, it2); // erase a particular part from set

    auto it3 = st.lower_bound(3); //  3 returns the location of element if presrnt or else the bigger element from the set or the next element
    auto it4 = st.upper_bound(6); //  4 always returns the bigger element from which is searched

    cout << *(it3) << endl;
    cout << *(it4) << endl;
}

int main()
{

    explain_set();
}