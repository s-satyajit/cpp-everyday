#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream MyFile("hello-world.txt");

    MyFile << "hello, this is satyajit, learning to code in c++ and push to git";

    MyFile.close();
    return 0;
}