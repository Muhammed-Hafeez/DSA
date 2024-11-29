#include <bits/stdc++.h>
using namespace std;
int main()
{

    queue<int> q;
    q.push(10);
    q.push(8);
    q.push(2);
    q.push(1);
    q.emplace(9);
    cout << q.back() << endl;  // 9
    cout << q.front() << endl; // 10
    cout << q.empty() << endl; // 0 | false;
    cout << q.size() << endl;  // 5
    q.pop();                   // removes 9
    queue<int> q2;
    q.swap(q2); // swaps q from q2;
    return 0;
}