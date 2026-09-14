#include <iostream>
using namespace std;

class StudentMarks
{
    int marks;

public:

    // Default constructor
    StudentMarks()
    {
        marks = 0;
    }

    // Parameterized constructor
    StudentMarks(int m)
    {
        marks = m;
    }

    // Operator overloading
    StudentMarks operator+(StudentMarks s)
    {
        return StudentMarks(marks + s.marks);
    }

    // Display function
    void display()
    {
        cout << "Total Marks = " << marks << endl;
    }
};

int main()
{
    int marks1, marks2;

    // Taking input from user
    cout << "Enter marks for Assessment 1: ";
    cin >> marks1;

    cout << "Enter marks for Assessment 2: ";
    cin >> marks2;

    // Parameterized constructors
    StudentMarks assessment1(marks1);
    StudentMarks assessment2(marks2);

    // Default constructor
    StudentMarks total;

    // Adding objects using overloaded + operator
    total = assessment1 + assessment2;

    // Display result
    total.display();

    return 0;
}
