#include <iostream>
using namespace std;

float toCelsius(float farenheit) {
    return (5.0 / 9.0) * (farenheit - 32.0);
}

int main() {
    float f_value = 98.8;
    float result = toCelsius(f_value);
    cout << "Farenheit: " << f_value << "\n";
    cout << "Celsius: " << result << "\n";
    return  0;
}