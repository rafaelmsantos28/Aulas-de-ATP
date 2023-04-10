#include <iostream>

using namespace std;

int main()
{
	int i, val;
	bool flag_impar;
	
	i = 0;
	flag_impar = false;
	
	while(i<3)
	{
		cin >> val;
		
		if (val%2==1)
		{
		flag_impar = true;
		break;
		}
	i++;	
		
	}
	
	if (flag_impar==false)
			cout << "todos sao pares";
		else
			cout << "nem todos sao pares";
	
	return 0;
}
