#include <iostream>
#include <string>
using namespace std;

// Inline function to calculate grade
inline char calculateGrade(int marks)
{
    if (marks >= 90)
        return 'A';
    else if (marks >= 75)
        return 'B';
    else if (marks >= 60)
        return 'C';
    else if (marks >= 40)
        return 'D';
    else
        return 'F';
}

class StudentReport;

class Student
{
private:
    string name;
    int rollNo;
    int marks;

    static int count;

public:
    Student(string name, int rollNo, int marks)
    {
        this->name = name;
        this->rollNo = rollNo;
        this->marks = marks;
        count++;
    }

    static void displayCount()
    {
        cout << "\nTotal Student Objects: "
             << count << endl;
    }

    friend class StudentReport;
};

// Initialize static data member
int Student::count = 0;

// Friend class
class StudentReport
{
public:
    void display(Student s)
    {
        cout << "\n----- Student Report -----" << endl;
        cout << "Name: " << s.name << endl;
        cout << "Roll Number: " << s.rollNo << endl;
        cout << "Marks: " << s.marks << endl;
        cout << "Grade: "
             << calculateGrade(s.marks) << endl;
    }
};

int main()
{
    string name;
    int rollNo, marks;

    cout << "Enter details of Student 1:" << endl;
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter roll number: ";
    cin >> rollNo;
    cout << "Enter marks: ";
    cin >> marks;

    Student s1(name, rollNo, marks);

    cout << "\nEnter details of Student 2:" << endl;
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter roll number: ";
    cin >> rollNo;
    cout << "Enter marks: ";
    cin >> marks;

    Student s2(name, rollNo, marks);

    StudentReport report;
    report.display(s1);
    report.display(s2);

    Student::displayCount();

    return 0;
}
