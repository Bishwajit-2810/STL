#include <bits/stdc++.h>
using namespace std;

// same as vector and list
//  it's a c++ container

void explain_deque()
{

    deque<int> de;
    de.push_back(3);     //{3}
    de.emplace_back(4);  //{3,4}
    de.push_front(2);    //{2,3,4}
    de.emplace_front(1); //{1,2,3,4}

    for (auto a = de.begin(); a != de.end(); a++)
    {
        cout << *(a) << " ";
    }
    de.pop_back();  //{1,2,3}
    de.pop_front(); //{2,3}
    cout << endl;
    for (auto a = de.begin(); a != de.end(); a++)
    {
        cout << *(a) << " ";
    }
    de.back();
    de.front();

    // rest functions are same as vector
}

int main()
{

    explain_deque();
}