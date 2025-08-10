#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream MyFile("hello-world.txt");
    MyFile << "hello everyone, satyajit here, learning to code in c++";
    MyFile.close();

    string myText;

    ifstream ReadFile("hello-world.txt");
    while(getline (ReadFile, myText)) {
        cout << myText;
    }
    ReadFile.close();
    return 0;
}