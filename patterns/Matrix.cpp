#include <iostream>
using namespace std;

void Matrix(int N)
{
    int top, bottom, left, right;
    for (int i = 0; i < 2 * N - 1; i++)
    {
        for (int j = 0; j < 2 * N - 1; j++)
        {
            top = i;
            left = j;
            right = (2 * N - 2) - j;
            bottom = (2 * N - 2) - i;
            cout << N - min(min(top, bottom), min(left, right));
        }
        cout << endl;
    }
}
int main()
{

    Matrix(5);
    return 0;
}