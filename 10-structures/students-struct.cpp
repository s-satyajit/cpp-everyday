#include <iostream>
using namespace std;

struct student {
    string name;
    int age;
    char grade;
};

int main() {
    student student1;
    student1.name = "satyajit";
    student1.age = 23;
    student1.grade = 'A';

    student student2;
    student2.name = "Something";
    student2.age = 22;
    student2.grade = 'A';

    student student3;
    student3.name = "Something2.o";
    student3.age = 22;
    student3.grade = 'A';

    cout << student1.name << " " << student1.age << " " << student1.grade << "\n";
    cout << student2.name << " " << student2.age << " " << student2.grade << "\n";
    cout << student3.name << " " << student3.age << " " << student3.grade << "\n";
}