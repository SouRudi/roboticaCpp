#include <iostream>
using namespace std;

float celsiusParaFahrenheit(float c) {
    return (c * 9 / 5) + 32;
}

int main() {
    float c;
    cout << "Digite temperatura em Celsius: ";
    cin >> c;

    cout << "Temperatura em Fahrenheit: " << celsiusParaFahrenheit(c) << endl;
    return 0;
}
