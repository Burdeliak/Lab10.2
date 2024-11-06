#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

enum Speciality { ComputerScience, Informatics, MathEconomics, PhysicsInformatics, LaborStudies };

struct StudentA {
    string lastName;
    int course;
    Speciality speciality;
    int physicsGrade;
    int mathGrade;
    int informaticsGrade;
};

// Function to convert speciality enum to string
string specialityToString(Speciality speciality) {
    switch (speciality) {
    case ComputerScience: return "Computer Science";
    case Informatics: return "Informatics";
    case MathEconomics: return "Math and Economics";
    case PhysicsInformatics: return "Physics and Informatics";
    case LaborStudies: return "Labor Studies";
    default: return "Unknown";
    }
}

// Function to input student data
StudentA inputStudentA() {
    StudentA student;
    cout << "Enter student's last name: ";
    cin >> student.lastName;
    cout << "Enter course (1-4): ";
    cin >> student.course;

    int speciality;
    cout << "Choose speciality (0 - Computer Science, 1 - Informatics, 2 - Math and Economics, 3 - Physics and Informatics, 4 - Labor Studies): ";
    cin >> speciality;
    student.speciality = static_cast<Speciality>(speciality);

    cout << "Enter grade in Physics: ";
    cin >> student.physicsGrade;
    cout << "Enter grade in Mathematics: ";
    cin >> student.mathGrade;
    cout << "Enter grade in Informatics: ";
    cin >> student.informaticsGrade;

    return student;
}

// Function to display student table
void printStudentsA(const vector<StudentA>& students) {
    cout << setw(5) << "No." << setw(15) << "Last Name" << setw(10) << "Course" << setw(25) << "Speciality"
        << setw(10) << "Physics" << setw(10) << "Math" << setw(15) << "Informatics" << endl;

    for (size_t i = 0; i < students.size(); ++i) {
        cout << setw(5) << i + 1
            << setw(15) << students[i].lastName
            << setw(10) << students[i].course
            << setw(25) << specialityToString(students[i].speciality)
            << setw(10) << students[i].physicsGrade
            << setw(10) << students[i].mathGrade
            << setw(15) << students[i].informaticsGrade << endl;
    }
}

// Main function
int main() {
    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;

    vector<StudentA> students;
    for (int i = 0; i < numStudents; ++i) {
        cout << "\nEntering information for student " << i + 1 << ":\n";
        students.push_back(inputStudentA());
    }

    cout << "\nStudent Information Table:\n";
    printStudentsA(students);

    return 0;
}
