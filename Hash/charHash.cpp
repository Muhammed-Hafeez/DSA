#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    string str = "abhhnnsctYn";
    int hash[26] = {0};
    for (int i = 0; i < str.size(); i++)
    {
        int x = str[i] - 'a';
        if(str[i] > 'z' || str[i] < 'a'){
            continue;
        }
        hash[x] += 1;
        cout << str[i] << "->" << hash[x] << " ";
    }
    cout << endl;

    return 0;
}
