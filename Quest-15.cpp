#include <iostream>
using namespace std;

bool ehPrimo(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int num;
    cout << "Digite um numero: ";
    cin >> num;

    if (ehPrimo(num))
        cout << num << " é primo" << endl;
    else
        cout << num << " não é primo" << endl;

    return 0;
}
