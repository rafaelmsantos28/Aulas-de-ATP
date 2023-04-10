#include <iostream>

using namespace std;

int main(){
	int x;
	cout << "Insira um valor: " << endl;
	cin >> x;
	bool resultado = x >= 5;
	if (resultado){
		cout << "Seu numero esta maior ou igual a 5!" << endl;
		
	}
	else{
		cout << "Seu numero esta menor que 5!";
	}
	
	return 0;
	
}
