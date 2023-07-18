#include <iostream>
#include <string.h>
#include <conio.h>

//Mateo Maas Esquivel
//4to Bachillerato en Computación
// 17 / 07 / 2023

using namespace std;
int x=10;
int z=x-1;
int y=x-1;
int i=0;
int a=0;
char A[10];

int main() {
	cout<<"Ingresa una cadena de texto"<<endl;
	for(i; i<x; i++){
	cin>>A[i];
	}
	cout<<"Palabra:"<<A<<endl;
	cout<<"La frase en orden inverso es:"<<endl;
	for(z; z>=0; z--){
	cout<<A[z];
	}
	cout<<" "<<endl;
	if(A[a] == A[y]){	
	cout<<"La palabra es un palíndromo."<<endl;	
	}
	else{
	cout<<"La palabra NO es un palíndromo."<<endl;	
	}
}
