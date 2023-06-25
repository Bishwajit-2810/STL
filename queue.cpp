#include <bits/stdc++.h>
using namespace std;

//  it's a c++ container
// follows the FIFO rule

void explain_queue()
{

    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.emplace(6);

    queue<int> q1;
    q.swap(q1);

    cout << "is queue empty : " << q.empty() << endl;
    cout << "front element : " << q1.front() << endl;
    cout << "back element : " << q1.back() << endl;
    cout << "is queue empty : " << q1.empty() << endl;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.emplace(6);

    while (!q.empty())
    {

        cout << q.front() << " ";
        q.pop();
    }

    // has same functions like stack
}
int main()
{

    explain_queue();
}