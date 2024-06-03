#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
};

bool comp_(Student x, Student y)
{
    int total_marks_x = x.math_marks + x.eng_marks;
    int total_marks_y = y.math_marks + y.eng_marks;
    if (total_marks_x == total_marks_y)
    {
        return x.id < y.id;
    }
    else
    {
        return total_marks_x > total_marks_y;
    }
}

int main()
{
    int size;
    cin >> size;
    Student students[size];
    for (int i = 0; i < size; i++)
    {
        cin >> students[i].nm >> students[i].cls >> students[i].s >> students[i].id >> students[i].math_marks >> students[i].eng_marks;
    }

    sort(students, students + size, comp_);

    for (int i = 0; i < size; i++)
    {
        cout << students[i].nm << " " << students[i].cls << " " << students[i].s << " " << students[i].id << " " << students[i].math_marks << " " << students[i].eng_marks << endl;
    }

    return 0;
}
