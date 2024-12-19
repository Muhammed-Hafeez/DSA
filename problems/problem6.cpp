#include <bits/stdc++.h>
using namespace std;
// balance the array
int stabilize(vector<int> &nums, int k)
{
    int i = 0, j = nums.size() - 1;

    while (i <= j)
    {
        if (k <= 0)
        {
            break;
        }
        int n = 0;

        while (n <= nums.size() - 1)
        {
            if (k <= 0)
            {
                break;
            }
            if (n == j)
            {
                n++;
                continue;
            }
            int increment = nums[j] - nums[n];
            if (increment <= k && increment >= 0)
            {

                k -= increment;
                nums[n] += increment;
                cout << k << "  " << nums[n] << endl;
            }
            n++;
        }
        j--;
    }
}
int main()
{

    vector<int> v = {1, 4, 8, 13};
    stabilize(v, 3);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }

    return 0;
}