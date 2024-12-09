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

    if (score >= 70) {
        grade = "A";
    } else if (score >= 60) {
        grade = "B";
    } else if (score >= 50) {
        grade = "C";
    } else if (score >= 40) {
        grade = "D";
    } else if (score >= 0) {
        grade = "F";
    } else {
        grade = "Invalid score";
    }
    
    cout << "Student: " << fullName << "\nCourse: " << course << "\nGrade: " << grade <<endl;

    return 0;
}
