#include <iostream>
#include <locale.h>
using namespace std;

int main() {
	locale::global(locale(""));

	int val, resul, n1, n2, n3, n4;

	inicio:

	cout << "[1] = Soma, [2] = Subtração, [3] = Multiplicação, [4] = Divisão" << endl;
	cout << "Selecione uma operação matemática e em seguida pressione 'Enter': ";
	cin >> val;

	switch (val) {

	case 1:
		cout << "Digite o primeiro número a ser somado: " << endl;
		cin >> n1;

		cout << "Digite o segundo número a ser somado: " << endl;
		cin >> n2;

		cout << "Digite o terceiro número a ser somado: " << endl;
		cin >> n3;

		cout << "Digite o quarto número a ser somado: " << endl;
		cin >> n4;

		resul = n1 + n2 + n3 + n4;

		cout << "O resultado da soma é: " << resul << endl;
		break;

	case 2:
		cout << "Digite o primeiro número a ser subtraído: " << endl;
		cin >> n1;

		cout << "Digite o segundo número a ser subtraído: " << endl;
		cin >> n2;

		cout << "Digite o terceiro número a ser subtraído: " << endl;
		cin >> n3;

		cout << "Digite o quarto número a ser subtraído: " << endl;
		cin >> n4;

		resul = n1 - n2 - n3 - n4;

		cout << "O resultado da subtração é: " << resul << endl;
		break;

	case 3:
		cout << "Digite o primeiro número a ser multiplicado: " << endl;
		cin >> n1;

		cout << "Digite o segundo número a ser multiplicado: " << endl;
		cin >> n2;

		cout << "Digite o terceiro número a ser multiplicado: " << endl;
		cin >> n3;

		cout << "Digite o quarto número a ser multiplicado: " << endl;
		cin >> n4;

		resul = n1 * n2 * n3 * n4;

		cout << "O resultado da multiplicação é: " << resul << endl;
		break;

	case 4:

		cout << "Digite o primeiro número a ser dividido: " << endl;
		cin >> n1;

		cout << "Digite o segundo número a ser dividido: " << endl;
		cin >> n2;

		cout << "Digite o terceiro número a ser dividido: " << endl;
		cin >> n3;

		cout << "Digite o quarto número a ser dividido: " << endl;
		cin >> n4;

		resul = n1 / n2 / n3 / n4;

		cout << "O resultado da divisão é: " << resul << endl;
		break;

	default:
		cout << "Opção inválida!" << endl;
		break;
	}
	cout << "Programa finalizado!" << endl;

	system("pause");

	goto inicio;
	
	return 0;

	
}