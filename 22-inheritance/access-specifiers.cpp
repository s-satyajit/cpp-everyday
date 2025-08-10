#include <iostream>
using namespace std;

class Employee {
    protected:
    int salary;
};

class Programmer: public Employee {
    public:
    int bonus;
    void setSalary(int n) {
        salary = n;
    }
    int getSalary() {
        return salary;
    }
};

int main() {
    Programmer myObj;
    myObj.setSalary(50000);
    myObj.bonus = 15000;
    cout << myObj.getSalary() << " : " << myObj.bonus << "\n";
    return 0;
}