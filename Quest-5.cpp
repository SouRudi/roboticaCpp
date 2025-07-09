#include <iostream>
#include <string>
using namespace std;

int main() {
    string nome;
    int idade;

    cout << "Digite seu nome: ";
    getline(cin, nome);

    cout << "Digite sua idade: ";
    cin >> idade;

    cout << "Olá, " << nome << "! Você tem " << idade << " anos." << endl;

    return 0;
}
