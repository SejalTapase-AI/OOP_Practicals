
#include <iostream>
using namespace std;

// Function uses a reference to update the original marks.
void updateMarks(int &marks, int extraMarks)
{
    marks = marks + extraMarks;
}

int main()
{
    int n;

    // Get the number of students appearing for the test.
    cout << "Enter the number of students: ";
    cin >> n;

    // Validate the number of students.
    if (n <= 0)
    {
        cout << "Invalid number of students." << endl;
        return 0;
    }

    // Dynamically allocate memory for the students' marks.
    int *marks = new int[n];

    // Input marks using pointer notation.
    cout << "Enter marks of " << n << " students:" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Student " << i + 1 << ": ";
        cin >> *(marks + i);
    }

    // Display marks using a pointer.
    cout << "\nMarks before update:" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Student " << i + 1
             << ": " << *(marks + i) << endl;
    }

    // Select a student whose marks will be updated.
    int studentNumber;
    int extraMarks;

    cout << "\nEnter student number to update (1 to "
         << n << "): ";
    cin >> studentNumber;

    if (studentNumber >= 1 && studentNumber <= n)
    {
        cout << "Enter additional marks: ";
        cin >> extraMarks;

        // Pass the selected student's marks by reference.
        updateMarks(marks[studentNumber - 1], extraMarks);

        cout << "Marks updated successfully." << endl;
        cout << "Updated marks of Student " << studentNumber
             << ": " << marks[studentNumber - 1] << endl;
    }
    else
    {
        cout << "Invalid student number. No update performed."
             << endl;
    }

    // Display the final marks of all students.
    cout << "\nFinal marks:" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Student " << i + 1
             << ": " << *(marks + i) << endl;
    }

    // Release the dynamically allocated array.
    delete[] marks;
    marks = nullptr;

    cout << "\nDynamic memory released successfully." << endl;

    return 0;
}
