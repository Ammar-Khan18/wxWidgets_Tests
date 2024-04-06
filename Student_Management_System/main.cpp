// To use or to display terminal go to project properties > Linker > System > Sub_System > Console
/*
#include<iostream>
#include<vector>
using namespace std;

class Student {
private:
    string name;
    vector<string> courses;
    int erp;
public:
    Student() {
        name = " ";
        erp = 0;
    }
    Student(string n, int e) {
        name = n;
        erp = e;
    }
    void SetName(string n) {
        name = n;
    }
    void SetERP(int e) {
        erp = e;
    }
    string GetName() {
        return name;
    }
    int GetERP() {
        return erp;
    }
    void SetCourses() {
        bool cont = true;
        string c;
        cout << "Enter Courses...To Terminate Enter 0:\n";
        while (cont == true) {
            cin >> c;
            if (c == "0") {
                return;
            }
            courses.push_back(c);
        }
    }
    void DisplayCourses() {
        cout << "Courses: ";
        for (int i = 0; i < courses.size(); i++) {
            cout << courses[i] << " ";
        }
    }
    void display() {
        cout << "Name: " << name << " | " << "ERP: " << erp << endl;
    }
};

int main() {
    Student s1{ "Ammar",29296 };
    s1.SetCourses();
    s1.display();
    s1.DisplayCourses();
    return 0;
}
*/