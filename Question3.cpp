#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;
    cout << "Enter student's name: ";
    getline(cin, name);

    double lab_grade;
    cout << "Enter lab grade: ";
    cin >> lab_grade;

    double midterm_grade;
    cout << "Enter midterm grade: ";
    cin >> midterm_grade;

    double final_grade;
    cout << "Enter final grade: ";
    cin >> final_grade;

    double last_score = (lab_grade * 0.25) + (midterm_grade * 0.35) + (final_grade * 0.40);

    cout << "Student: " << name << endl;
    cout << "Lab Grade: " << lab_grade << endl;
    cout << "Midterm Grade: " << midterm_grade << endl;
    cout << "Final Grade: " << final_grade << endl;
    cout << "Last Score: " << last_score << endl;

    return 0;
}
