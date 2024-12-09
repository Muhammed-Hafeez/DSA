#include <iostream>
#include <unordered_map>
#include <vector>
int main()
{
    std::unordered_map<int, int> hash;
    std::vector<int> arr = {10, 20, 40, 1, 1, 33, 33, 2, 2, 3, 3};
    for (int i = 0; i < arr.size(); i++)
    {
        hash[arr[i]]++;
    }

    //fetch
    while (true)
    {
        int number;
        std::cin >> number;
        std::cout << number << " is " << hash[number] << " time found in hash map" << std::endl;
    }

    return 0;
}