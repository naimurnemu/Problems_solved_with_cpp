#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    int id;
    char name[100];
    char section;
    int totalMarks;
    Student(int id, const char *name, char section, int totalMarks)
    {
        this->id = id;
        strcpy(this->name, name);
        this->section = section;
        this->totalMarks = totalMarks;
    }
};

Student *setStudent()
{
    int id;
    char name[100];
    char section;
    int totalMarks;
    cin >> id >> name >> section >> totalMarks;
    Student *student = new Student(id, name, section, totalMarks);
    return student;
}

int main()
{
    int times;
    cin >> times;

    for (int i = 0; i < times; i++)
    {
        Student *student1 = setStudent();
        Student *student2 = setStudent();
        Student *student3 = setStudent();

        Student *maxStudent = student1;
        if (student2->totalMarks > maxStudent->totalMarks ||
            (student2->totalMarks == maxStudent->totalMarks &&
             student2->id < maxStudent->id))
        {
            maxStudent = student2;
        }
        if (student3->totalMarks > maxStudent->totalMarks ||
            (student3->totalMarks == maxStudent->totalMarks &&
             student3->id < maxStudent->id))
        {
            maxStudent = student3;
        }

        cout << maxStudent->id << " " << maxStudent->name << " " << maxStudent->section << " " << maxStudent->totalMarks << endl;

        delete student1;
        delete student2;
        delete student3;
    }

    return 0;
}
