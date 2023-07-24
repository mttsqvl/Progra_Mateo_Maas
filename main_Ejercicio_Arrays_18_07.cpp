#include <iostream>

// Mateo Maas Esquivel
// 4to Bachillerato en Computación

using namespace std;
int x;
int main() {
	
	cout<<"Ingresa el número de elementos que quieres que tenga el vector"<<endl;
	cin>>x;
	int A[x];
	
	cout<<"Ingresa los números que quieres que tenga dicho vector."<<endl;
	for(int i=0; i<x; i++){
	cin>>A[i];	
	}

	cout<<"El vector ingresado es:"<<endl;
	for(int a=0; a<x; a++){
	cout<<A[a]<<endl;	
	}
	cout<<"El vector en orden inverso es:"<<endl;
	for(int b=x-1; b>=0; b--){
	cout<<A[b]<<endl;	
	}
	return 0;
}
