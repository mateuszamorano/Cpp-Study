#include <iostream>
#include <locale.h>
using namespace std;

int main() {
	locale::global(locale(""));

	int val, resul, n1, n2, n3, n4;

	inicio:

	cout << "[1] = Soma, [2] = Subtra��o, [3] = Multiplica��o, [4] = Divis�o" << endl;
	cout << "Selecione uma opera��o matem�tica e em seguida pressione 'Enter': ";
	cin >> val;

	switch (val) {

	case 1:
		cout << "Digite o primeiro n�mero a ser somado: " << endl;
		cin >> n1;

		cout << "Digite o segundo n�mero a ser somado: " << endl;
		cin >> n2;

		cout << "Digite o terceiro n�mero a ser somado: " << endl;
		cin >> n3;

		cout << "Digite o quarto n�mero a ser somado: " << endl;
		cin >> n4;

		resul = n1 + n2 + n3 + n4;

		cout << "O resultado da soma �: " << resul << endl;
		break;

	case 2:
		cout << "Digite o primeiro n�mero a ser subtra�do: " << endl;
		cin >> n1;

		cout << "Digite o segundo n�mero a ser subtra�do: " << endl;
		cin >> n2;

		cout << "Digite o terceiro n�mero a ser subtra�do: " << endl;
		cin >> n3;

		cout << "Digite o quarto n�mero a ser subtra�do: " << endl;
		cin >> n4;

		resul = n1 - n2 - n3 - n4;

		cout << "O resultado da subtra��o �: " << resul << endl;
		break;

	case 3:
		cout << "Digite o primeiro n�mero a ser multiplicado: " << endl;
		cin >> n1;

		cout << "Digite o segundo n�mero a ser multiplicado: " << endl;
		cin >> n2;

		cout << "Digite o terceiro n�mero a ser multiplicado: " << endl;
		cin >> n3;

		cout << "Digite o quarto n�mero a ser multiplicado: " << endl;
		cin >> n4;

		resul = n1 * n2 * n3 * n4;

		cout << "O resultado da multiplica��o �: " << resul << endl;
		break;

	case 4:

		cout << "Digite o primeiro n�mero a ser dividido: " << endl;
		cin >> n1;

		cout << "Digite o segundo n�mero a ser dividido: " << endl;
		cin >> n2;

		cout << "Digite o terceiro n�mero a ser dividido: " << endl;
		cin >> n3;

		cout << "Digite o quarto n�mero a ser dividido: " << endl;
		cin >> n4;

		resul = n1 / n2 / n3 / n4;

		cout << "O resultado da divis�o �: " << resul << endl;
		break;

	default:
		cout << "Op��o inv�lida!" << endl;
		break;
	}
	cout << "Programa finalizado!" << endl;

	system("pause");

	goto inicio;
	
	return 0;

	
}