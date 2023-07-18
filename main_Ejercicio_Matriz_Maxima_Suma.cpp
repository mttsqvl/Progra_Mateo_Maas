#include <iostream>
#include <conio.h>
// Mateo Maas Esquivel
//4to Bachillerato en Computación
// 17 / 07 / 2023
using namespace std;
int A[5][5];
int e[5];
int x=0;
int main() {
	cout<<"Ingresa los números que quieres incluir en la matriz."<<endl;
	for(int a=0; a<5; a++){
	for(int b=0; b<5; b++){
	cout<<"Posición "<<a<<","<<b<<": ";	
	cin>>A[a][b];	
	}	
	}
	cout<<"La matriz ingresada es:"<<endl;
	for(int c=0; c<5; c++){
	cout<<A[c][0]<<" "<<A[c][1]<<" "<<A[c][2]<<" "<<A[c][3]<<" "<<A[c][4]<<endl;	
	}
	cout<<"La suma de cada fila es de:"<<endl;
	for(int d=0; d<5; d++){
	e[d] = A[d][0] + A[d][1] + A[d][2] + A[d][3] + A[d][4];	
	}
	for(int f=0; f<5; f++){
	cout<<"La suma de la fila "<<f+1<<" es de: "<<e[f]<<endl;	
	}
	
	for(int g=0; g<5; g++){
	if(e[g] > x){
	x = e[g];	
	}
	}
	cout<<"La suma máxima es de: "<<x<<endl;
	for(int i=0; i<5; i++){
	if(x = A[i+1][0] + A[i+1][1] + A[i+1][2] + A[i+1][3] + A[i+1][4]){
	cout<<"La suma máxima fue de "<<x<<", de la fila "<<i+1<<endl;	
	}
	if(x = A[i+2][0] + A[i+2][1] + A[i+2][2] + A[i+2][3] + A[i+2][4]){
	cout<<"La suma máxima fue de "<<x<<", de la fila "<<i+2<<endl;	
	}	
	if(x = A[i+3][0] + A[i+3][1] + A[i+3][2] + A[i+3][3] + A[i+3][4]){
	cout<<"La suma máxima fue de "<<x<<", de la fila "<<i+3<<endl;	
	}	
	if(x = A[i+4][0] + A[i+4][1] + A[i+4][2] + A[i+4][3] + A[i+4][4]){	
	cout<<"La suma máxima fue de "<<x<<", de la fila "<<i+4<<endl;
	}
	getch();
	}
	}

