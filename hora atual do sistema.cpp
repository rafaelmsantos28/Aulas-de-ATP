#include <iostream>
#include <time.h>
using namespace std;

int main(){
	
	//Obtenha o tempo atual
	time_t t = time(0);
	
	//Converte o tempo para a estrutura tm
	struct tm* now = localtime(&t);
	
	
	//Obtenha a data atual
	
	int day = now ->tm_mday;
	int month = now ->tm_mon + 1;
	int year = now ->tm_year + 1900;
	
	//Obtenha a hora atual
	int hour = now ->tm_hour;
	int min = now ->tm_min;
	int sec = now ->tm_sec;
	
	//imprime a data atual
	cout << "Data atual: " << day << "/" << month << "/" << year << endl;
	cout << "Hora atual: " << hour << ":" << min << ":" << sec << endl;
	
	return 0;
	
}
