#include <bits/stdc++.h>
using namespace std;

// array with Steroids
// it has dynamic charecter of increasing and decreasing
// it's a c++ container

void explain_vector()
{
    // simple vector

    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    // there is a difference in push_back and emplace_back
    // emplace_back can take pairs in vector but push_back cann't

    // vector of pair

    vector<pair<int, int>> va;
    va.push_back({1, 2});
    va.emplace_back(3, 4);

    // define vector with spacific size and spacific value containing
    // here we created a vector for 5 values filled with 0

    vector<int> vaa(5, 0);

    // we don't need assign vector with values it will automatically assign with garbage value

    vector<int> vaaa(5);

    // we can copy a vector to another (a seperate copy)

    vector<int> vaaaa(vaaa);

    // we can access vectors like array
    cout << v[1] << endl;
    // or like
    cout << v.at(1) << endl; // people don't use it (not popular)

    // we can use them using iterators

    vector<int>::iterator name = v.begin(); // here name is a pointer and v.begin represents a address at the begining position
    cout << *(name) << endl;
    name++;
    cout << *(name) << endl;

    // also can use iterators like

    vector<int>::iterator name1 = v.end(); // represents a address at right after last element -- required

    // vector<int>::iterator name = v.rend();
    // vector<int>::iterator name = v.rbegin();

    // go to the last element

    cout << v.back() << endl;

    // using loop

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {

        cout << *(it) << endl;
    }

    // C++ has a special Feature "auto" keyword which automatically find the data type

    for (auto it = v.begin(); it != v.end(); it++)
    {

        cout << *(it) << endl;
    }

    // also can be done using for-each loop

    for (auto it : v)
    {
        cout << it << endl;
    }

    // erase data from vector
    // from any position

    v.erase(v.begin() + 1);

    // erase a part from vector

    v.erase(v.begin() + 1, v.begin() + 3);

    // insert in a vector
    // insert in a vector is very costly

    v.insert(v.begin(), 4);

    // insert in a position

    v.insert(v.begin() + 1, 6);

    // insert a number multiple time in vector

    v.insert(v.begin() + 1, 5, 6); // inserts 5 sixes

    // insert a vector in another vector

    vector<int> newv(2, 50);
    v.insert(v.begin(), newv.begin(), newv.end());

    // size of a vector

    cout << v.size() << endl;

    // pop the last element

    v.pop_back();

    // it is posible to swap 2 vectors

    v.swap(vaa); // same type

    // erase the whole vector

    v.clear();

    // return true or false for vector is empty or not

    cout << v.empty();
}

int main()
{
    explain_vector();
}