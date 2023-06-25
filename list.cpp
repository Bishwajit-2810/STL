#include <bits/stdc++.h>
using namespace std;

// same as vector but gives us front operations as well
//  it's a c++ container
// it's like doubbly link list

void explain_list()
{

    list<int> ls;
    ls.push_back(3);     //{3}
    ls.emplace_back(4);  //{3,4}
    ls.push_front(2);    //{2,3,4}
    ls.emplace_front(1); //{1,2,3,4}

    for (auto a = ls.begin(); a != ls.end(); a++)
    {
        cout << *(a) << " ";
    }

    //rest functions are same as vector
    
}

int main()
{

    explain_list();
}