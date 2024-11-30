#include <bits/stdc++.h>
using namespace std;

// Function to calculate power without using pow
int calculatePower(int base, int exponent)
{
    int result = 1;
    while (exponent > 0)
    {
        result *= base;
        exponent--;
    }
    return result;
}

int main()
{
    int N = 153;                  // Number to check
    int arm_N = 0;                // Accumulated Armstrong sum
    int x = N;                    // Original number to compare
    int power_val = log10(N) + 1; // Number of digits

    while (N > 0)
    {
        int ld = N % 10;                        // Extract the last digit
        arm_N += calculatePower(ld, power_val); // Add the power of the digit
        N = N / 10;                             // Remove the last digit
    }

    // Check if the Armstrong sum equals the original number
    if (arm_N == x)
        cout << "True: " << x << " is an Armstrong number." << endl;
    else
        cout << "False: " << x << " is not an Armstrong number." << endl;

    return 0;
}
