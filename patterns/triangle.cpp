#include <iostream>
using namespace std;

void Triangle(int N)
{
    for (int i = 1; i <= N; i++)
    {
        // for spacing
        for (int space = (N - i) + 1; space > 0; space--)
        {
            cout << " ";
        }
        // for Inverse triangle
        for (int inverse = 1; inverse <= i; inverse++)
        {
            cout << "*";
        }
        // for last triangle
        for (int l_triangle = 2; l_triangle <= i; l_triangle++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
int main()
{
    cout << endl;
    Triangle(10);
    cout << endl;
    return 0;
}