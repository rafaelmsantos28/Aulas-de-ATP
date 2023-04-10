#include <iostream>
#include <conio.h>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
    char op;
    cout << "MENU" << endl;
    cout << "1. Opção 1" << endl;
    cout << "2. Opção 2" << endl;
    cout << "Escolha uma opção: ";
    op = getch(); // Lê um caractere inserido no console sem precisar teclar 'enter'
    switch (op)
    {
        case '1':
            cout << "Opção 1 escolhida";
            break;
        case '2':
            cout << "Opção 2 escolhida";
            break;
        default:
            cout << "Opção inválida";
    }
    return 0;
}

