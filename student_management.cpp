#include <iostream>
#include <fstream>
#include <vector>

class Student {
public:
    int id;
    std::string name;
    float marks;

    void inputStudent() {
        std::cout << "Enter Student ID: ";
        std::cin >> id;
        std::cin.ignore(); // Clear input buffer
        std::cout << "Enter Name: ";
        std::getline(std::cin, name);
        std::cout << "Enter Marks: ";
        std::cin >> marks;
    }

    void displayStudent() const {
        std::cout << "ID: " << id << ", Name: " << name << ", Marks: " << marks << std::endl;
    }

    void saveToFile(std::ofstream &outfile) const {
        outfile << id << " " << name << " " << marks << "\n";
    }
};

// Function to load students from file
std::vector<Student> loadStudentsFromFile(const std::string &filename) {
    std::vector<Student> students;
    std::ifstream infile(filename);
    if (!infile) {
        std::cerr << "File not found, starting fresh.\n";
        return students;
    }

    Student s;
    while (infile >> s.id >> s.name >> s.marks) {
        students.push_back(s);
    }
    infile.close();
    return students;
}

// Function to save students to file
void saveStudentsToFile(const std::vector<Student> &students, const std::string &filename) {
    std::ofstream outfile(filename);
    for (const auto &s : students) {
        s.saveToFile(outfile);
    }
    outfile.close();
}

// Main program
int main() {
    std::vector<Student> students = loadStudentsFromFile("students.txt");

    int choice;
    do {
        std::cout << "\n1. Add Student\n2. Display Students\n3. Exit\nEnter choice: ";
        std::cin >> choice;

        if (choice == 1) {
            Student s;
            s.inputStudent();
            students.push_back(s);
            saveStudentsToFile(students, "students.txt");
        } 
        else if (choice == 2) {
            std::cout << "\nStudent List:\n";
            for (const auto &s : students) {
                s.displayStudent();
            }
        }
    } while (choice != 3);

    std::cout << "Exiting program...\n";
    return 0;
}
