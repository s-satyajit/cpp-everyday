#include <iostream>
using namespace std;

template <typename T1, typename T2>
class Pair {
    public:
    T1 first;
    T2 second;

    Pair(T1 a, T2 b) {
        first = a;
        second = b;
    }

    void display() {
        cout << "first: " << first << ", second: " << second << "\n";
    }
};

int main() {
    Pair<string, int> person("satyajit", 23);
    Pair<int, bool> anotherObj(100, true);

    person.display();
    anotherObj.display();
    return 0;
}