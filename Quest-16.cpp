#include <iostream>
#include <string>
using namespace std;

string inverter(string s) {
    int n = s.length();
    for (int i = 0; i < n / 2; i++) {
        swap(s[i], s[n - i - 1]);
    }
    return s;
}

int main() {
    string texto;
    cout << "Digite uma palavra: ";
    cin >> texto;

    cout << "Invertido: " << inverter(texto) << endl;
    return 0;
}
