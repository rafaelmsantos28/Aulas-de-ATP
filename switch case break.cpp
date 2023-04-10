#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	char tipo;
	cin >> tipo;
	switch(tipo){
		case 'A':
			cout << "A e O";
			break;
		case 'B':
			cout << "B e O";
			break;
		case 'O':
			cout << "Apenas O";
			break;
		case 'Z':
			cout << "A, B, Z e O";
		default:
			cout << "Inválido";
	}
	return 0;
}
