#include <iostream>
using namespace std;

const float PI = 3.14159f;

int main() {
    float raio, area;
    cout << "Digite o raio do circulo: ";
    cin >> raio;

    area = PI * raio * raio;

    cout << "Area do circulo: " << area << endl;
    return 0;
}
