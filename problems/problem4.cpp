
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int removeDuplicatesNotOptimal(vector<int> &nums)
    {
        vector<int> aux;
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] != nums[i + 1])
            {
                aux.push_back(nums[i]);
            }
        }
        aux.push_back(nums[nums.size() - 1]);
        nums = aux;
        return aux.size();
    }
    int removeDuplicates(vector<int> &nums)
    {
        if(nums.size() <= 0){
            return 0;
        }
        int pivot = 0;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] != nums[pivot])
            {
                pivot++;
                nums[pivot] = nums[i];
            }
        }
        return pivot + 1;
    }
};

int main()
{

    Solution s = Solution();
    vector<int> v = {1};
    int k = s.removeDuplicates(v);
    cout << k << endl;
    return 0;
}
