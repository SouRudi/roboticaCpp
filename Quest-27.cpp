#include <iostream>
#include <string>
using namespace std;

string decimalParaBinario(int n) {
    if (n == 0) return "0";
    string bin = "";
    while (n > 0) {
        bin = (n % 2 == 0 ? "0" : "1") + bin;
        n /= 2;
    }
    return bin;
}

int main() {
    int num;
    cout << "Digite um numero decimal: ";
    cin >> num;

    cout << "Binario: " << decimalParaBinario(num) << endl;
    return 0;
}
