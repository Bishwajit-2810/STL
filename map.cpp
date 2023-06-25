#include <bits/stdc++.h>
using namespace std;

//  it's a c++ container
// stores unique keys and data
// in sorted order of keys
// lower_bound and upper_bound works here
void explain_map()
{

    map<int, int> mpp;
    map<int, pair<int, int>> mpppp;
    map<pair<int, int>, int> mppp;

    mpp[1] = 2;
    mpp.emplace(3, 4);
    mpp.insert({2, 4});

    cout << mpp[1] << " ";
    cout << mpp[3] << endl;

    for (auto it : mpp)
    {

        cout << it.first << " " << it.second << endl;
    }

    auto itt = mpp.find(2);
    cout << (*itt).first << " " << (*itt).second << endl;

    // rest are same as set
}


int main()
{

    explain_map();
}