#include <iostream>

using namespace std;

int main()
{
	int num1, num2, num3; 
	
	cout << "Digite num1: ";
	cin >> num1;
	
	cout << "Digite num2: ";
	cin >> num2;
	
	cout << "Digite num3: ";
	cin >> num3;
	
	if ((num3 < num2) && (num3 > num1) || (num3 > num2) && (num3 < num1)){
		
		cout << "Pertence ao intervalo entre os dois primeiros numeros";
	} else {
		
		cout << "Não pertence ao intervalo";
	}
	
	return 0;
}