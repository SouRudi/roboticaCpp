#include <iostream>
using namespace std;

float media(float a, float b, float c) {
    return (a + b + c) / 3;
}

int main() {
    float n1, n2, n3;
    cout << "Digite tres numeros: ";
    cin >> n1 >> n2 >> n3;
    cout << "Media: " << media(n1, n2, n3) << endl;
    return 0;
}
