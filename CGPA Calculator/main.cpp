#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    int courses;
    float creditHours, totalCredits = 0, totalGradePoints = 0, gradePoint;
    string grade;

    cout << "==========================================" << endl;
    cout << "          CGPA CALCULATOR" << endl;
    cout << "==========================================" << endl;

    cout << "Enter the number of courses: ";
    cin >> courses;

    string grades[100];
    float credits[100];

    for (int i = 0; i < courses; i++)
    {
        cout << "\nCourse " << i + 1 << endl;

        cout << "Enter Grade (A+, A, A-, B+, B, B-, C+, C, C-, D, F): ";
        cin >> grade;

        cout << "Enter Credit Hours: ";
        cin >> creditHours;

        grades[i] = grade;
        credits[i] = creditHours;

        if (grade == "A+")
            gradePoint = 4.0;
        else if (grade == "A")
            gradePoint = 4.0;
        else if (grade == "A-")
            gradePoint = 3.7;
        else if (grade == "B+")
            gradePoint = 3.3;
        else if (grade == "B")
            gradePoint = 3.0;
        else if (grade == "B-")
            gradePoint = 2.7;
        else if (grade == "C+")
            gradePoint = 2.3;
        else if (grade == "C")
            gradePoint = 2.0;
        else if (grade == "C-")
            gradePoint = 1.7;
        else if (grade == "D")
            gradePoint = 1.0;
        else if (grade == "F")
            gradePoint = 0.0;
        else
        {
            cout << "Invalid Grade! Grade point considered as 0.\n";
            gradePoint = 0.0;
        }

        totalCredits += creditHours;
        totalGradePoints += gradePoint * creditHours;
    }

    float cgpa = totalGradePoints / totalCredits;

    cout << "\n==========================================" << endl;
    cout << "           COURSE DETAILS" << endl;
    cout << "==========================================" << endl;

    cout << left << setw(10) << "Course"
         << setw(10) << "Grade"
         << setw(15) << "Credit Hours" << endl;

    for (int i = 0; i < courses; i++)
    {
        cout << left << setw(10) << i + 1
             << setw(10) << grades[i]
             << setw(15) << credits[i] << endl;
    }

    cout << "\n==========================================" << endl;
    cout << fixed << setprecision(2);
    cout << "Total Credit Hours : " << totalCredits << endl;
    cout << "Total Grade Points : " << totalGradePoints << endl;
    cout << "Final CGPA         : " << cgpa << endl;
    cout << "==========================================" << endl;

    if (cgpa >= 3.70)
        cout << "Performance: Excellent" << endl;
    else if (cgpa >= 3.00)
        cout << "Performance: Very Good" << endl;
    else if (cgpa >= 2.50)
        cout << "Performance: Good" << endl;
    else if (cgpa >= 2.00)
        cout << "Performance: Average" << endl;
    else
        cout << "Performance: Needs Improvement" << endl;

    return 0;
}
