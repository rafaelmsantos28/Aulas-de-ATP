#include <iostream>
#include <conio.h>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
	int i;
    system("cls");
    cout << "Digite um número: ";
    cin >> i;
    switch (i)
    {
        case 1:
            cout << "Número 1";
            break;
        case 2:
            cout << "Número 2";
            break;
        default:
            cout << "Número diferente de 1 e de 2";
    }
    getch();
    return 0;
}

