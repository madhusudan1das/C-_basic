#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class Student {
public:
    string name;
    int rollNo;
    float marks;

    void inputStudent() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void displayStudent() const {
        cout << "Name: " << name << " | Roll No: " << rollNo << " | Marks: " << marks << endl;
    }
};

void saveToFile(const vector<Student>& students, const string& filename) {
    ofstream file(filename);
    for (const auto& s : students) {
        file << s.name << " " << s.rollNo << " " << s.marks << endl;
    }
    file.close();
}

void loadFromFile(vector<Student>& students, const string& filename) {
    ifstream file(filename);
    Student s;
    while (file >> s.name >> s.rollNo >> s.marks) {
        students.push_back(s);
    }
    file.close();
}

int main() {
    vector<Student> students;
    string filename = "students.txt";
    int choice;

    do {
        cout << "\n1. Add Student\n2. Display Students\n3. Save to File\n4. Load from File\n5. Exit\nEnter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                Student s;
                s.inputStudent();
                students.push_back(s);
                break;
            }
            case 2:
                for (const auto& s : students) {
                    s.displayStudent();
                }
                break;
            case 3:
                saveToFile(students, filename);
                cout << "Data saved successfully!" << endl;
                break;
            case 4:
                students.clear();
                loadFromFile(students, filename);
                cout << "Data loaded successfully!" << endl;
                break;
            case 5:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
    } while (choice != 5);

    return 0;
}
