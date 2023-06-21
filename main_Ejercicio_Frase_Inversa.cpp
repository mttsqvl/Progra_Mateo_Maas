#include <iostream>
#include <string.h>
#include <conio.h>

// Mateo Maas Esquivel

using namespace std;

int main(){
	int x=20;
	char A[20];
	
	cout<<"Ingresa una frase."<<endl;

	cin.getline(A, 20, '\n');
	cout<<A<<endl;
	
	cout<<"La frase en orden inverso es:"<<endl;
	for(int z=x-1; z>=0; z--){
	cout<<A[z];
	}
}
