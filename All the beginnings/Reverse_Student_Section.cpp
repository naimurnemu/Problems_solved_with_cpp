#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
};

int main()
{
    int size;
    cin >> size;
    Student students[size];
    for (int i = 0; i < size; i++)
    {
        cin >> students[i].nm >> students[i].cls >> students[i].s >> students[i].id;
    }
    int j = size - 1;
    for (int i = 0; i < size - 1; i++)
    {
        if (i < j)
        {
            char temp = students[i].s;
            students[i].s = students[j].s;
            students[j].s = temp;
            j--;
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << students[i].nm << " " << students[i].cls << " " << students[i].s << " " << students[i].id << endl;
    }

    return 0;
}
