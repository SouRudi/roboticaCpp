#include <iostream>
using namespace std;

void converteMinutos(int totalMinutos, int &horas, int &minutos) {
    horas = totalMinutos / 60;
    minutos = totalMinutos % 60;
}

int main() {
    int total, h, m;
    cout << "Digite total de minutos: ";
    cin >> total;

    converteMinutos(total, h, m);

    cout << total << " minutos = " << h << " hora(s) e " << m << " minuto(s)" << endl;
    return 0;
}
