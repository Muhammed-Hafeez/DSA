#include <iostream>
using namespace std;

void rectangle(int N)
{
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            if (i == 1 || i == N || j == 1 || j == N) // for first and last line
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main()
{

    rectangle(5);
    return 0;
}