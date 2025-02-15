#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int times;
    cin >> times;

    vector<int> digits(times);
    for (int i = 0; i < times; i++)
    {
        cin >> digits[i];
    }

    vector<long long int> prefix(times);
    for (int i = 0; i < times; i++)
    {
        if(i != 0) {
            prefix[i] = prefix[i-1] + digits[i];
        } else {
            prefix[i] = digits[i];
        }
    }

    for (int i = times-1; i >=0; i--)
    {
        cout << prefix[i] << " ";
    }
    
    return 0;
}
