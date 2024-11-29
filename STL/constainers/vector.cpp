#include <iostream>
#include <vector>
using namespace std;

// Template function to print the elements of a vector
template <class T>
void print(T vec, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
}

int main()
{
    // Initialize a vector and add elements
    vector<int> p;
    for (int i = 0; i < 5; i++)
    {
        p.push_back(i + 1); // Add elements 1 to 5
    }
    p.emplace_back(6); // Add 6 (similar to push_back)

    // Create a vector of pairs (e.g., student ID and name)
    vector<pair<int, string>> students;
    students.push_back({0, "Hafeez"});
    students.emplace_back(1, "Lisa");

    // Print student data
    for (auto student : students)
    {
        cout << student.first << " " << student.second << " ";
    }
    cout << endl;

    // Copy vector `p` to `p1`
    vector<int> p1 = p;
    cout << "Size of vector p and p1: " << p.size() << " " << p1.size() << endl;

    // Print vector `p`
    print(p, p.size());

    // Create a vector `v` with 10 elements, each initialized to 100
    vector<int> v(10, 100);
    print(v, v.size());

    // Get iterators for beginning and end of vector `p`
    auto p_begin = p.begin();
    auto p_end = p.end() - 1;                  // Points to the last element
    cout << "p.begin(): " << *p_begin << endl; // Output: 1
    cout << "p.end(): " << *p_end << endl;     // Output: 6

    // Erase elements from position 1 to 2 (p1[1] and p1[2])
    p1.erase(p1.begin() + 1, p1.begin() + 3); // Removes 2nd and 3rd elements
    print(p1, p1.size());                     // Output: 1 4 5 6

    // Insert two -1s at position 1 in `p1`
    p1.insert(p1.begin() + 1, 2, -1); // Inserts -1, -1 at index 1
    print(p1, p1.size());             // Output: 1 -1 -1 4 5 6

    // Insert all elements of `p1` at the end of `v`
    v.insert(v.end(), p1.begin(), p1.end());
    print(v, v.size()); // Output: 100 100 ... 100 1 -1 -1 4 5 6

    // Remove the last element from `v`
    v.pop_back();

    // Swap contents of `v` and `p1`
    v.swap(p1);

    /*
    After swap:
    p1 = 100 100 ... 100 1 -1 -1 4 5
    v = 1 -1 -1 4 5 6
    */

    // Clear all elements in `p1`
    p1.clear(); // p1 becomes empty

    return 0;
}

