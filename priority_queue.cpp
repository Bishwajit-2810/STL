#include <bits/stdc++.h>
using namespace std;

// it's a c++ container
// follows the (largest value stays at the top) rule
// max heap
void explain_priority_queue1()
{

    priority_queue<int> pq;

    pq.push(1);
    pq.push(2);
    pq.push(3);
    pq.push(4);
    pq.push(5);
    pq.emplace(6);

    priority_queue<int> q1;
    pq.swap(q1);

    cout << "is queue empty : " << pq.empty() << endl;
    cout << "top element : " << q1.top() << endl;
    cout << "is queue empty : " << q1.empty() << endl;

    pq.push(5);
    pq.push(4);
    pq.push(6);
    pq.push(3);
    pq.push(1);
    pq.emplace(2);

    while (!pq.empty())
    {

        cout << pq.top() << " ";
        pq.pop();
    }

    // has same functions like queue
}
void explain_priority_queue2()
{

    priority_queue<int, vector<int>, greater<int>> pq;

    pq.push(5);
    pq.push(4);
    pq.push(6);
    pq.push(3);
    pq.push(1);
    pq.emplace(2);

    cout<<endl;
    while (!pq.empty())
    {

        cout << pq.top() << " ";
        pq.pop();
    }
}

int main()
{
    explain_priority_queue1();
    explain_priority_queue2();
    
}