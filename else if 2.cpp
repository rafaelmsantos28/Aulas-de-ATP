#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	char tipo;
	cout << "Infome seu tipo sanguíneo (A, B, O, Z): ";
	cin >> tipo;
	if(tipo == 'A' || tipo == 'a')
		cout << "Paciente aceita doações dos tipos A e O.";
	else if (tipo == 'B' || tipo == 'b')
			cout << "Paciente aceita doações dos tipos B e O.";
		else if (tipo == 'O' || tipo == 'o')
				cout << "Paciente aceita doações apenas do tipo O.";
			else if (tipo == 'Z' || tipo == 'z')
					cout << "Paciente aceita doações dos tipos A, B, O e Z.";
				else
					cout << "Opção inválida.";
						return 0;
}
