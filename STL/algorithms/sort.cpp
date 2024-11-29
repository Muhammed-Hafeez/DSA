#include <bits/stdc++.h>
using namespace std;
void print(auto v)
{
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;
}

bool custom_comp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
        return true;
    if (p1.second > p2.second)
        return false;
    if (p1.first < p1.first)
        return false;
    return true;
}
int main()
{
    vector<int> v = {1, 2, 3, 45, 22, 1, 2};
    sort(v.begin(), v.end());
    print(v);

    // array sort
    int arr[] = {1, 2, 3, 45, 22, 1, 2};
    int *start = arr;
    int *last = &arr[sizeof(arr) / sizeof(int)];
    sort(start, last);

    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // custom sort function
    vector<pair<int, int>> pv = {{1, 2}, {2, 1}, {4, 1}};
    sort(pv.begin(), pv.end(), custom_comp);
    for (int i = 0; i < pv.size(); i++)
    {
        pair<int, int> n = pv[i];
        cout << n.first << " " << n.second <<endl;
    }

   //output :-  21 41 12   41 21 12   41 21 12
    return 0;
}