#include <iostream>
#include <string>
using namespace std;

bool ehPalindromo(string s) {
    int n = s.length();
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - 1 - i])
            return false;
    }
    return true;
}

int main() {
    string palavra;
    cout << "Digite uma palavra: ";
    cin >> palavra;

    if (ehPalindromo(palavra))
        cout << palavra << " é palindromo" << endl;
    else
        cout << palavra << " nao é palindromo" << endl;

    return 0;
}
