#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    pair<bool, int> isSorted(vector<int> &nums)
    {
        pair<bool, int> sorted = {true, 0};
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] <= nums[i + 1])
            {
                sorted.second++;
                cout << "sorted Index" << sorted.second << endl;
                continue;
            }
            sorted.first = false;
            sorted.second += 1;
            break;
        }
        return sorted;
    }
    bool check(vector<int> &nums)
    {
        vector<int> aux;
        pair<bool, int> s = isSorted(nums);
        if (s.first)
            return true;
        for (int i = s.second; i < nums.size(); i++)
        {
            aux.push_back(nums[i]);
        }
        for (int i = 0; i < s.second; i++)
        {
            aux.push_back(nums[i]);
        }
        return isSorted(aux).first;
    }
};

int main()
{
    vector<int> v = {2, 1};
    Solution s = Solution();
    string message = s.check(v) ? "array is sorted or rotated" : "array is not sorted";
    cout << message << endl;
    return 0;
}