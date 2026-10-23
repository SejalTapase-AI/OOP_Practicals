
#include <iostream>
#include <string>
using namespace std;

// Base class
class Person
{
protected:
    string name;

public:
    Person(string n) : name(n) {}

    void displayPerson()
    {
        cout << "Person Name: " << name << endl;
    }

    virtual ~Person()
    {
        // Base class destructor
    }
};

// 1. Single inheritance
class CollegeStudent : public Person
{
public:
    CollegeStudent(string n) : Person(n) {}

    void displayStudent()
    {
        displayPerson();
        cout << "College Student Details Displayed" << endl;
    }

    ~CollegeStudent() override {}
};

// Student uses virtual inheritance for the hybrid example
class Student : virtual public Person
{
public:
    Student(string n) : Person(n) {}

    ~Student() override {}
};

// 2. Multilevel inheritance
class GraduateStudent : public Student
{
public:
    GraduateStudent(string n) : Person(n), Student(n) {}

    void displayGraduate()
    {
        displayPerson();
        cout << "Graduate Student Details Displayed" << endl;
    }

    ~GraduateStudent() override {}
};

// Base class for academic information
class AcademicRecord
{
protected:
    int marks;

public:
    AcademicRecord(int m) : marks(m) {}

    ~AcademicRecord() {}
};

// Base class for sports information
class SportsRecord
{
protected:
    int sportsScore;

public:
    SportsRecord(int s) : sportsScore(s) {}

    ~SportsRecord() {}
};

// 3. Multiple inheritance
class AllRounder : public AcademicRecord,
                   public SportsRecord
{
public:
    AllRounder(int m, int s)
        : AcademicRecord(m), SportsRecord(s) {}

    void displayAllRounder()
    {
        cout << "Academic Marks: " << marks << endl;
        cout << "Sports Score: " << sportsScore << endl;
    }

    ~AllRounder() {}
};

// 4. Hierarchical inheritance
class CollegeTeacher : public Person
{
public:
    CollegeTeacher(string n) : Person(n) {}

    void displayTeacher()
    {
        displayPerson();
        cout << "College Teacher Details Displayed" << endl;
    }

    ~CollegeTeacher() override {}
};

// Teacher also virtually inherits Person
class Teacher : virtual public Person
{
public:
    Teacher(string n) : Person(n) {}

    ~Teacher() override {}
};

// 5. Hybrid inheritance
// Combines hierarchical and multiple inheritance
class TeachingAssistant : public Student, public Teacher
{
public:
    TeachingAssistant(string n)
        : Person(n), Student(n), Teacher(n) {}

    void displayAssistant()
    {
        displayPerson();
        cout << "Teaching Assistant Details Displayed" << endl;
    }

    ~TeachingAssistant() override {}
};

int main()
{
    cout << "--- Single Inheritance ---" << endl;
    CollegeStudent cs("Sejal");
    cs.displayStudent();

    cout << "\n--- Multiple Inheritance ---" << endl;
    AllRounder ar(90, 85);
    ar.displayAllRounder();

    cout << "\n--- Multilevel Inheritance ---" << endl;
    GraduateStudent gs("Rahul");
    gs.displayGraduate();

    cout << "\n--- Hierarchical Inheritance ---" << endl;
    CollegeStudent student("Priya");
    CollegeTeacher teacher("Amit");

    student.displayStudent();
    teacher.displayTeacher();

    cout << "\n--- Hybrid Inheritance ---" << endl;
    TeachingAssistant ta("Neha");
    ta.displayAssistant();

    cout << "\nAll inheritance types demonstrated successfully."
         << endl;

    return 0;
}
