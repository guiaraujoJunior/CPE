#include <iostream>
using namespace std;

bool EhPrimo(int num) {
	// Guilherme Araujo Sena || 241008602 || Turma 01
    if (num <= 1)
        return false;

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }

    return true;
}

int main() {
    int numero;
    cout << "Digite um n�mero: ";
    cin >> numero;

    cout << (EhPrimo(numero) ? "� primo." : "N�o � primo.") << endl;

    return 0;
}
