#include <iostream>
using namespace std;

int potencia(int base, int expoente) {
    int resultado = 1;
    for (int i = 0; i < expoente; i++) {
        resultado *= base;
    }
    return resultado;
}

int main() {
    int b, e;
    cout << "Digite base e expoente: ";
    cin >> b >> e;

    cout << b << "^" << e << " = " << potencia(b, e) << endl;
    return 0;
}
