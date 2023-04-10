#include <iostream>
#include <locale>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    
    int i, tempoempresa, salario, maiortempo, contvendedores, contsalariov, menortempoestoque, remutempo;
    char cargo;
    
    
    tempoempresa = 0;
    salario = 0;
    maiortempo = 0;
    contvendedores = 0;
    contsalariov = 0;
    menortempoestoque = 200;
    remutempo = 0;
    i= 0;
    
    while (i < 2)
    {
    	cout << "Insira o tempo de empresa: ";
        cin >> tempoempresa;
		cout <<"Insira seu cargo (V, C ou E): ";
		cin >> cargo;
		cout << "Insira seu salário: ";
		cin >> salario;
        
        if(tempoempresa > maiortempo)
        
            maiortempo = tempoempresa;
        
        
        if (cargo == 'V' || cargo == 'v')
        {
            cout << "Novo salário de vendedor é de: " << salario * 1.05 << "\n" << endl;
            contvendedores = contvendedores + 1;
            contsalariov = contsalariov + (salario * 1.05);
        }
        
        else if (cargo == 'C' || cargo == 'c')
            cout << "Novo salário de chefia é de: " << salario + 2000 << "\n" << endl;
        
            
        else if (cargo == 'E' || cargo == 'e')
        {
            cout << "Novo salário de estocador é de: " << salario + ((salario/10)*(tempoempresa/5)) << "\n" << endl;
            
            if(tempoempresa<menortempoestoque)
            {
                menortempoestoque = tempoempresa;
                remutempo = salario;
            }
            
        }
            
        else
            cout << "Cargo indefinido, portanto desconsiderado." << endl;
        
            i = i + 1;
    }
    
    cout << "O maior tempo na empresa foi de: " << maiortempo << " anos." << endl;
    cout << "A média de remuneração dos vendedores foi de: R$ " << contsalariov/contvendedores << endl;
    cout << "A remuneração do funcionário de estoque a menos tempo na empresa foi de: R$ " << remutempo << endl;
    
    return 0;
}
