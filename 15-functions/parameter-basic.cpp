#include <iostream>
using namespace std;

void myFunction(string fname) {
    cout << fname << " is the name \n";
}

int main() {
    string first;
    string second;
    string third;
    cin >> first;
    cin >> second;
    cin >> third;
    myFunction(first);
    myFunction(second);
    myFunction(third);

}