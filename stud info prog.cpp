// ============================================================
// PROGRAM 3: Student Information Program
// ============================================================
#include <iostream>
#include <string>
using namespace std;

int main() {
    string indexNumber, fullName, program, dateOfBirth;
    int age;

    cout << "==============================" << endl;
    cout << "  STUDENT INFORMATION SYSTEM  " << endl;
    cout << "==============================" << endl;
    cout << "Enter Index Number: ";
    cin >> indexNumber;
    cin.ignore(); // clear newline from buffer
    cout << "Enter Full Name: ";
    getline(cin, fullName);
    cout << "Enter Program: ";
    getline(cin, program);
    cout << "Enter Age: ";
    cin >> age;
    cin.ignore();
    cout << "Enter Date of Birth (DD-MM-YYYY): ";
    getline(cin, dateOfBirth);

    cout << "--- Output ---" << endl;
    cout << "\"Congratulate " << fullName << " for your admission to GTUC. ";
    cout << "You have been accepted to offer the program " << program << ". ";
    cout << "Your index number is " << indexNumber << ". ";
    cout << "Please check if your age is " << age << " and your  date of birth is ";
    cout << dateOfBirth << ". Thank you.\"" << endl;

    return 0;
}

