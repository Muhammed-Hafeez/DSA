#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> v = {3, 9, 6};
    int k = 2;
    int i = 0, j = v.size() - 1, diff, cpk = k;
    sort(v.begin(), v.end());
    while (i <= j)
    {
        diff = v[j] - v[i];
        if (diff > k)
        {
            i++;
            continue;
        }
        if (k <= 0)
        {
            break;
        }
        v[i] += diff;
        k -= diff;
        i++;
    }
    map<int, int> hash;
    for (int i = 0; i < v.size(); i++)
    {
        hash[v[i]] += 1;
    }
    cout << hash[v[v.size() - 1]] << endl;
    return 0;
}
