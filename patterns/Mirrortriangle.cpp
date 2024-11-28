#include <iostream>
using namespace std;

void printRow(int col, bool Inverse = false, int N = 0)
{
    if (Inverse)
    {
        for (int first_row = (N - col)-1; first_row >= 0; first_row--)
        {
            cout << "*";
        }
        return;
    }

    for (int first_row = 1; first_row <= col + 1; first_row++)
    {
        cout << "*";
    }
}
void MirrorTriangle(int N)
{

    for (int col = 0; col < N; col++)
    {

        printRow(col);
        for (int space_row = (N - col - 1) * 2; space_row >= 1; space_row--)
        {
            cout << " ";
        }
        printRow(col);
        cout << endl;
    }
    for (int col = 0; col < N; col++)
    {
        printRow(col, true, N - 1);
        for (int space_row = 0; space_row <= (col * 2) + 1; space_row++)
        {
            cout << " ";
        }
        printRow(col, true, N - 1);
        cout << endl;
    }
}

int main()
{
    MirrorTriangle(5);
    return 0;
}