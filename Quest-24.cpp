#include <iostream>
using namespace std;

int somaVetor(int vetor[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }
    return soma;
}

int main() {
    int v[5] = {1, 2, 3, 4, 5};
    cout << "Soma do vetor: " << somaVetor(v, 5) << endl;
    return 0;
}
