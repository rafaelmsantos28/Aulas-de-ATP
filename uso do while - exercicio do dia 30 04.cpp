/*

Faça um programa em C++ que recebe: 
a) tempo de empresa
b) cargo (v-vendedor, c-chefia, e-estoque
c) salário

Pede-se:

a) mostrar remuneração   V --> 0,5% por ano na empresa
						 C --> 2000,0
						 E --> + 10% por quinquênio
b) maior tempo de empresa
c) média da remuneração dos vendedores
d) remuneração do funcionário de estoque há menos tempo na empresa
e) se todos os chefes têm mais de 10 anos na empresa

*/

#include <iostream>
#include <locale>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    
    int i, tempoempresa, salario, maiortempo, contvendedores, contsalariov, menortempoestoque, remutempo;
    char cargo;
    bool flag_maisde10;
    
    
    tempoempresa = 0;
    salario = 0;
    maiortempo = 0;
    contvendedores = 0;
    contsalariov = 0;
    menortempoestoque = 200;
    remutempo = 0;
    i= 0;
    flag_maisde10 =false;
    
    while (i < 5)
    {
        cin >> tempoempresa >> cargo >> salario;
        
        if(tempoempresa > maiortempo)
        
            maiortempo = tempoempresa;
        
        
        if (cargo == 'V' || cargo == 'v')
        {
            cout << "Novo salário de vendedor é de: " << salario * 1.05 << endl;
            contvendedores = contvendedores + 1;
            contsalariov = contsalariov + (salario * 1.05);
        }
        
        else if (cargo == 'C' || cargo == 'c')
        {
		
            cout << "Novo salário de chefia é de: " << salario + 2000 << endl;
            
            if(tempoempresa <10)
		    flag_maisde10 = true;
		    
		}
        
            
        else if (cargo == 'E' || cargo == 'e')
        {
        	salario = salario + ((salario/10)*(tempoempresa/5));
            cout << "Novo salário de estocador é de: " << salario << endl;
            
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
    
    std::cout << "O maior tempo na empresa foi de: " << maiortempo << " anos." << endl;
    
    if (contvendedores>0)
    
    cout << "A média de remuneração dos vendedores foi de: R$ " << contsalariov/contvendedores << endl;
    
    else
    
    cout << "Não houve dados sobre número de venderores" << endl;
    
    cout << "A remuneração do funcionário de estoque a menos tempo na empresa foi de: R$ " << remutempo << endl;
    
    if (flag_maisde10==true)
    	cout << "Nem todos os chefes estão na empresa a mais de 10 anos";
    else
    	cout << "Todos os chefes estão a mais de 10 anos na empresa";
    
    return 0;
    
    
    
}
