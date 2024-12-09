#include <iostream>
#include <string>

int main() {
    
    string fullName, course;
    int score;

    cout << "Enter the full name of the student: ";
    getline(cin, fullName);
    cout << "Enter the course: ";
    getline(cin, course);
    cout << "Enter the score: ";
    cin >> score;

    string grade;

    switch (score / 10) {
        case 10:
        case 9:
        case 8:
        case 7:
            grade = "A";
            break;
        case 6:
            grade = "B";
            break;
        case 5:
            grade = "C";
            break;
        case 4:
            grade = "D";
            break;
        case 0:
        case 1:
        case 2:
        case 3:
            grade = "F";
            break;
        default:
            grade = "Invalid score";
            break;
    }

    cout << "Student: " << fullName << "\nCourse: " << course << "\nGrade: " << grade << endl;

    return 0;
}
