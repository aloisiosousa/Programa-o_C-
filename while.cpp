#include <iostream>

using namespace std;


int main()
{
	int num1, num2;
	
		cout << "Digite um numero: ";
		cin >> num1;
		cout << "Digite um numero: ";
		cin >> num2;
			
	
	while(num1 != num2){
		
			cout << "Digite novamente\n";		
			cin >> num2; 
	
		}	
		
		cout << "num1 = num2";	
	return 0;
}