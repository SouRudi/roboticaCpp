#include <iostream>
using namespace std;

float areaRetangulo(float base, float altura) {
    return base * altura;
}

int main() {
    float b, h;
    cout << "Digite base e altura: ";
    cin >> b >> h;

    cout << "Area do retangulo: " << areaRetangulo(b, h) << endl;
    return 0;
}
