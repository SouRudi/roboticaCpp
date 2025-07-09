#include <iostream>
using namespace std;

int somaDigitos(int n) {
    int soma = 0;
    n = abs(n);
    while (n > 0) {
        soma += n % 10;
        n /= 10;
    }
    return soma;
}

int main() {
    int num;
    cout << "Digite um numero inteiro: ";
    cin >> num;

    cout << "Soma dos digitos: " << somaDigitos(num) << endl;
    return 0;
}
