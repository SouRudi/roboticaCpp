#include <iostream>
using namespace std;

float maior(float a, float b) {
    return (a > b) ? a : b;
}

int main() {
    float x, y;
    cout << "Digite dois numeros float: ";
    cin >> x >> y;

    cout << "Maior: " << maior(x, y) << endl;
    return 0;
}
