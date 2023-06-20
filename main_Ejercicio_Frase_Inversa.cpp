#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;



int main() {
	int x=5;
	char A[x];
	
	cout<<"Ingresa una frase."<<endl;
	cin.getline(A, x, '/n');
	cout<<A<<endl;
	
	int y=0;
	cout<<"La frase en orden inverso es:"<<endl;
	for(int x=5; x<=y; x--){
	cout<<A[x]<<endl;
}
}
