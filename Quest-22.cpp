#include <iostream>
using namespace std;

string verificaNumero(int n) {
    if (n > 0) return "Positivo";
    else if (n < 0) return "Negativo";
    else return "Zero";
}

int main() {
    int num;
    cout << "Digite um numero: ";
    cin >> num;

    cout << "O numero é: " << verificaNumero(num) << endl;
    return 0;
}
