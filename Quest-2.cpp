#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Digite dois numeros inteiros: ";
    cin >> a >> b;

    cout << "Soma: " << a + b << endl;
    cout << "Subtracao: " << a - b << endl;
    cout << "Multiplicacao: " << a * b << endl;

    if (b != 0)
        cout << "Divisao: " << (float)a / b << endl;
    else
        cout << "Divisao: impossivel dividir por zero" << endl;

    return 0;
}
