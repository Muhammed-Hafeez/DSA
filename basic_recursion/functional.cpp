#include <iostream>
using namespace std;

int functional_factorial(int N)
{ // suppose N is 5
    if (N < 1)
    {
        return 1; // N == 0
    }

    return N *  functional_factorial(N - 1); //5 * 4 * 3 * 2 * 1
}
int main()
{

    int ff = functional_factorial(5);
    cout << ff << endl;
    return 0;
}