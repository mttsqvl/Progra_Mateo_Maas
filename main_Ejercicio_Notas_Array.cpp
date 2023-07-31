#include <iostream>
#include <conio.h>
#include <string>
// Mateo Maas Esquivel
// 4to Bachillerato en Computación

using namespace std;

string A[2];
double B[3];
double C[3];
double suma;
double promedio;
int main() {
	
	for(int i=0; i<2; i++){
	cout<<"Ingrese el nombre de el estudiante no."<<i+1<<endl;	
	cin>>A[i];
	for(int a=0; a<3; a++){
	cout<<"Ingresa la nota de la materia "<<a+1<<endl;
	cin>>B[a];
	suma=suma+B[a];
	}
	promedio=suma/3;
	cout<<"Promedio total: "<<promedio<<endl;
	if(promedio > 60){
	cout<<"Felicidades! El estudiante APROBÓ."<<endl;
	cout<<"Nombre   Materia 1   Materia 2   Materia 3   Estado"<<endl;
	cout<<A[i]<<"  "<<B[0]<<"  "<<B[1]<<"  "<<B[2]<<"  Aprobado"<<endl;
	suma=0;
	}
	else{
	cout<<"El estudiante REPROBÓ."<<endl;
	cout<<"Nombre\Materia 1\Materia 2\Materia 3\Estado"<<endl;
	cout<<A[i]<<"\n"<<B[0]<<"\n"<<B[1]<<"\n"<<B[2]<<"\n"<< "Reprobado"<<endl;
	suma=0;	
	}
	}
	
	
	}
