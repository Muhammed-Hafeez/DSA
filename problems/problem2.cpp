#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findSecondLargest(vector<int> arr)
    {
        int largest = arr[0];
        int second_largest = largest;
        for (int i = 1; i < arr.size(); i++)
        {
            if (largest <= arr[i])
            {
                second_largest = largest;
                largest = arr[i];
            }
            if(arr[i] >=  second_largest && arr[i] < largest){
                second_largest = arr[i];
            }
        }
        return second_largest;
    };
};
int main()
{

    Solution s = Solution();
    vector<int> v = {1, 2, 3, 4, 22, 33, 44, 22, 100, 34, 56, 34, 0, 78, 35};
    cout << s.findSecondLargest(v) << endl;
    return 0;
}
