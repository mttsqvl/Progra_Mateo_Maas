#include <iostream>

// Mateo Maas Esquivel
//4to Bachillerato en Computación
// 17 / 07 / 2023

using namespace std;

int A[15];
int aux;
int main() {
	cout<<"Ingresa los 15 números que quieres ordenar."<<endl;
	for(int i=0; i<15; i++){
	cin>>A[i];	
	}
	cout<<"Numeros en orden ascendente:"<<endl;
	for(int a=0; a<15; a++){
		for(int b=0; b<15; b++){
			if(A[b] > A[b+1]){
			aux = A[b];
			A[b] = A[b+1];
			A[b+1] = aux;
			}	
		}	
	}
	for(int c=0; c<15; c++){
	cout<<A[c]<<endl;	
	}
		cout<<"Numeros en orden descendente:"<<endl;
	for(int a=0; a<15; a++){
		for(int b=0; b<15; b++){
			if(A[b] < A[b+1]){
			aux = A[b];
			A[b] = A[b+1];
			A[b+1] = aux;
			}	
		}	
	}
	for(int c=0; c<15; c++){
	cout<<A[c]<<endl;	
	}
}
