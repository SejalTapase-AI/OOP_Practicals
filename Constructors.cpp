#include <iostream>
using namespace std;

class StudentMarks
{
private:
    int assessment1;
    int assessment2;

public:

    // Default Constructor
    StudentMarks()
    {
        assessment1 = 0;
        assessment2 = 0;
    }

    // Parameterized Constructor
    StudentMarks(int m1, int m2)
    {
        assessment1 = m1;
        assessment2 = m2;
    }

    // Copy Constructor
    StudentMarks(const StudentMarks &s)
    {
        assessment1 = s.assessment1;
        assessment2 = s.assessment2;
    }

    // Member Function to calculate total
    int calculateTotal()
    {
        return assessment1 + assessment2;
    }

    // Member Function to display details
    void display()
    {
        cout << "Assessment 1 = " << assessment1 << endl;
        cout << "Assessment 2 = " << assessment2 << endl;
        cout << "Total Marks = " << calculateTotal() << endl;
    }
};

int main()
{
    int m1, m2;

    // Object using Default Constructor
    cout << "Default Constructor:" << endl;

    StudentMarks s1;
    s1.display();

    // Taking input from user
    cout << "\nEnter marks for Assessment 1: ";
    cin >> m1;

    cout << "Enter marks for Assessment 2: ";
    cin >> m2;

    // Object using Parameterized Constructor
    cout << "\nParameterized Constructor:" << endl;

    StudentMarks s2(m1, m2);
    s2.display();

    // Object using Copy Constructor
    cout << "\nCopy Constructor:" << endl;

    StudentMarks s3(s2);
    s3.display();

    return 0;
}
