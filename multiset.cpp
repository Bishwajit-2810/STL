#include <bits/stdc++.h>
using namespace std;

//  it's a c++ container
// sorted order
// stores everything

void explain_multi_set()
{

    multiset<int> mst;
    mst.insert(1);
    mst.insert(3);
    mst.insert(6);
    mst.insert(5);
    mst.insert(7);
    mst.insert(6);
    mst.insert(2);
    mst.insert(4);

    mst.erase(6);                        // all 6 will be erased
    mst.erase(mst.find(6));              // only one 6 will be erased
    mst.erase(mst.find(6), mst.find(7)); // a particular part will be erased

    //rest all are same as set

}
int main(){

    explain_multi_set();
}