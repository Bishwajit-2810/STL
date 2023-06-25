#include <bits/stdc++.h>
using namespace std;

// it's a part of utility library
// it's make a pair of data items of any type

void explain_pair()
{

    // simple pair

    pair<int, int> p = {1, 2};
    cout << p.first << " " << p.second << endl;

    // user input in pair

    cout << "simple input output pair" << endl;
    pair<int, int> pa;
    cin >> pa.first >> pa.second;
    cout << pa.first << " " << pa.second << endl;

    // pair of pair is also possible

    cout << "pair of pair" << endl;
    pair<int, pair<int, int>> pp = {1, {2, 3}};
    cin >> pp.first >> pp.second.first >> pp.second.second;
    cout << pp.first << " " << pp.second.first << " " << pp.second.second << endl;

    // pair of array is also possible

    pair<int, int> arr[] = {{1, 2}, {3, 4}};
    cout << arr[0].first << " " << arr[0].second << " " << arr[1].first << " " << arr[1].second << endl;
}

int main()
{
    explain_pair();
}