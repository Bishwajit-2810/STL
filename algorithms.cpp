#include <bits/stdc++.h>
using namespace std;

// all important algorithms

bool comp(pair<int, int> p1, pair<int, int> p2)
{

    if (p1.second < p2.second)
        return true;
    if (p1.second > p2.second)
        return false;

    if (p1.first > p2.first)
        return true;
    return false;
}

int main()
{

    int arr[] = {5, 6, 7, 4, 3, 1, 2};
    int length = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // use address to sort (ascending order)
    sort(arr, arr + 7);

    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // use address to sort (descending order)

    sort(arr, arr + 7, greater<int>()); // greater<>() helps to sort in descending order

    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // use address to sort (my way of order)
    // sort according to second element
    // if they are same then sort according to first element in descending
    // comp is a helping function

    pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};

    sort(a, a + 3, comp);

    int num = 7;
    int cnt = __builtin_popcount(num);
    cout << cnt << endl; // 3 cause binary of 7 is 111 it returns the number of 1
    num = 6;
    cnt = __builtin_popcount(num); // 2 cause binary of 6 is 110 it returns the number of 1
    cout << cnt << endl;

    // if the number is very big then __builtin_popcountll(n) is used

    long long int n = 123456789245;
    cnt = __builtin_popcountll(n);
    cout << cnt << endl
         << endl;

    // all permutations of string
    // sorted is needed

    cout << "permutations : " << endl;
    string str = "123";
    sort(str.begin(), str.end());
    do
    {
        cout << str << endl;

    } while (next_permutation(str.begin(), str.end()));

    // max element of an array

    int arr1[] = {5, 6, 7, 4, 3, 1, 2};
    int maxx = *max_element(arr1, arr1 + 7); // max_element returns the address of the max element so pointer is needed
    cout << "max : " << maxx << endl;

    // max and min from 2 elements
    int aa = max(6, 7);
    cout << "max is : " << aa << endl;
    int aaa = min(6, 7);
    cout << "min is : " << aaa << endl;
}