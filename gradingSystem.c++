#include <iostream>
#include <vector>
#include <string>
using namepsace std;

//adding records
void addRecord(vector<string>& names, vector<int>& grades, vector<string>& subjects) {
    string name, subject;
    int grade;

    cout << "Enter student name: ";
    cin >> name;
    names.push_back(name);

    cout << "Enter student grade: ";
    cin >> grade;
    grades.push_back(grade);

    cout << "Enter student subject: ";
    cin >> subject;
    subjects.push_back(subject);
}

//printing records
void printRecords(const vector<string>& names, const vector<int>& grades, const vector<string>& subjects) {
    if (names.empty()) {
        cout << "No records found." <<endl;
        return;
    }

    cout << "\nStudent Records:" << endl;
    for (size_t i = 0; i < names.size(); ++i) {
        cout << "Record " << i + 1 << ": " << names[i] << " (Grade " << grades[i] << ", Subject: " << subjects[i] << ")" << endl;
    }
}



//updation
void updateRecord(vector<string>& names, vector<int>& grades, vector<string>& subjects) {
    int recordNumber;
    cout << "Enter the record number to update: ";
    cin >> recordNumber;

    if (recordNumber >= 1 && recordNumber <= names.size()) {
        cout << "Enter updated student name: ";
        cin >> names[recordNumber - 1];

        cout << "Enter updated student grade: ";
        cin >> grades[recordNumber - 1];

        cout << "Enter updated student subject: ";
        cin >> subjects[recordNumber - 1];
    } else {
        cout << "Invalid record number. Please try again." <<endl;
    }
}

//deletion
void deleteRecord(vector<string>& names, vector<int>& grades, vector<string>& subjects) {
    int recordNumber;
    cout << "Enter the record number to delete: ";
    cin >> recordNumber;

    if (recordNumber >= 1 && recordNumber <= names.size()) {
        names.erase(names.begin() + recordNumber - 1);
        grades.erase(grades.begin() + recordNumber - 1);
        subjects.erase(subjects.begin() + recordNumber - 1);
        cout << "Record deleted successfully." <<endl;
    } else {
        cout << "Invalid record number. Please try again." << endl;
    }
}

int main() {
    vector<string> studentNames;
    vector<int> studentGrades;
    vector<string> studentSubjects;
    int choice;

    do {
        cout << "\nStudent Records Management System" <<endl;
        cout << "1. Add Record" << endl;
        cout << "2. Display Records" <<endl;
        cout << "3. Update Record" <<endl;
        cout << "4. Delete Record" <<endl;
        cout << "5. Clear All Records" << endl;
        cout << "6. Exit" <<endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addRecord(studentNames, studentGrades, studentSubjects);
                break;
            case 2:
                printRecords(studentNames, studentGrades, studentSubjects);
                break;
            case 3:
                updateRecord(studentNames, studentGrades, studentSubjects);
                break;
            case 4:
                deleteRecord(studentNames, studentGrades, studentSubjects);
                break;
            case 5:
                studentNames.clear();
                studentGrades.clear();
                studentSubjects.clear();
                cout << "All records cleared." <<endl;
                break;
            case 6:
                cout << "Exiting the program." <<endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 6);

    return 0;
}

