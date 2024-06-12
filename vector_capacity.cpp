#include <bits/stdc++.h>
using namespace std;

// Initialize a vector:
// Print Initial Vector Properties:
// Resize the Vector:
// Clear the Vector:
// Check if the Vector is Empty:
// Resize to Original Size:

int main()
{
    int n = 10;
    vector<int> v_int;
    for (int i = 1; i <= n; i++)
    {
        v_int.push_back(i);
    }

    cout << v_int.size() << endl;
    cout << v_int.capacity() << endl;
    cout << v_int.max_size() << endl;
    cout << endl;

    v_int.resize(20, 0);
    cout << v_int.size() << endl;
    cout << v_int.capacity() << endl;
    cout << endl;

    // v_int.clear();
    // cout << v_int.size() << endl;
    // cout << v_int.capacity() << endl;
    // cout << endl;

    cout << v_int.empty() << endl;
    cout << endl;

    v_int.resize(10);

    for (int item : v_int)
    {
        cout << item << " ";
    }
    cout << endl;

    return 0;
}
