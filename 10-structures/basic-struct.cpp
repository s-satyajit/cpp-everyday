#include <iostream>
using namespace std;

int main() {
    struct {
        int myNum;
        string myString;
    } myStructure1, myStructure2, myStructure3;

    myStructure1.myNum = 100;
    myStructure1.myString = "Satyajit";

    myStructure2.myNum = 200;
    myStructure2.myString = "Satyajit Samal";

    myStructure3.myNum = 300;
    myStructure3.myString = "Satyajit Samal Lipun";

    cout << myStructure1.myNum << "\n";
    cout << myStructure1.myString << "\n";

    cout << myStructure2.myNum << "\n";
    cout << myStructure2.myString << "\n";

    cout << myStructure3.myNum << "\n";
    cout << myStructure3.myString << "\n";
}