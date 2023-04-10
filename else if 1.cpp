#include <iostream>
using namespace std;

int main(){
	int x, y, z;
	cin >> x >> y >> z;
	
	if (x > y)
	{
		if (y > z)
			cout << x << " " << y << " " << z;
		else if (x > z)
			cout << x << " " << z << " " << y;
		else
			cout << z << " " << x << " " << y;
	}
	
	else
	{
		if (x>z)
			cout << y << " " << x << " " << z;
		else if (y>z)
			cout << y << " " << z << " " << x;
		else
			cout << z << " " << y << " " << x;
	}
	return 0;
}
