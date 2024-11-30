#include <bits/stdc++.h>
using namespace std;
bool isPrimeNumber(int N)
{
    if (N <= 1)
        return false; // Handle edge case for 1 and numbers less than 1
    if (N == 2)
        return true; // 2 is a prime number

    if (N % 2 == 0)
        return false; // Eliminate all even numbers greater than 2

    // Check divisibility from 3 up to sqrt(N), skipping even numbers
    for (int i = 3; i <= sqrt(N); i += 2)
    {
        if (N % i == 0)
            return false; // Found a divisor, not a prime
    }

    return true; // No divisors found, it is a prime number
}
int main()
{

    int N = 10;
    int i = 2;
    isPrimeNumber(N) ? cout << N << " is a prime number" << endl
            : cout << N << " is not a prime number" << endl;
    return 0;
}