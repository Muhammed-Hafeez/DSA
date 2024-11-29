#include <bits/stdc++.h>
using namespace std;

void print(auto pq){
    while (!pq.empty())
    {
        auto top = pq.top();
        cout << top << " ";
        pq.pop();
    }
    cout << endl;
}

struct Compare{
    bool operator()(const pair<char, int> &a, const pair<char, int> &b)
    {
        return a.second < b.second;
    }
};
int main()
{

    priority_queue<int> q;
    q.push(10);
    q.push(8);
    q.push(2);
    q.push(1);
    q.emplace(9);
    cout << q.top() << endl; // 10
    cout << q.empty() << endl; // 0 | false;
    cout << q.size() << endl;  // 5
    q.pop();                   // removes 10
    
    priority_queue<int> q2;
    q.swap(q2); // swaps q from q2;
    priority_queue<int> pq = q2;
    print(pq);

    //min heap priority queue
    priority_queue<int, vector<int>, greater<int>> gq;
    gq.push(10);
    gq.push(3);
    gq.push(1);
    print(gq);

    //custom pq
    priority_queue<pair<int, char>, vector<pair<int, char>>, Compare> cpq;
    cpq.push({10,'A'});
    cpq.push({12,'B'});
    cpq.push({1,'C'});
    cpq.push({2,'D'});
    cpq.emplace(11,'E');
    cout << "Characters in priority order:\n";
    while (!cpq.empty())
    {
        auto top = cpq.top();
        cout << "Char: " << top.first << ", Priority: " << top.second << endl;
        cpq.pop();
    }
    return 0;
}