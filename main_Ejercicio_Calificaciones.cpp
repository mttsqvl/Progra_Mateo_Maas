#include <iostream>
#include <string.h>
#include <conio.h>

//Mateo Maas Esquivel
//4to Bachillerato en Computación
//Sección Gamma
//4 / 07 / 2023

using namespace std;
int a;
int x;
int suma;
int promedio;
char A[20];
int B[5];
int main() {
	
	while(a!=5){
	cout<<"---MENU---"<<endl;
	cout<<"Ingresa una número para realizar una acción."<<endl;
	cout<<"1. Ingresa nombre y apellido del estudiante."<<endl;
	cout<<"2. Ingresar las notas de los cursos asignados por el docente."<<endl;
	cout<<"3. Visualización de las notas individuales."<<endl;
	cout<<"4. Promedio general de las notas."<<endl;
	cout<<"5. Salir."<<endl;
	cin>>a;
	
	switch(a){
	case 1: 
	cout<<"Ingresa un nombre y un apellido de algún estudiante."<<endl;
	cin.ignore();
	cin.getline(A, 20, '\n');
	; break;		
	
	case 2:
	cout<<"Ingresa las notas obtenidas en los cursos."<<endl;
	for(int i=0; i<5; i++){
	cout<<"Materia "<<i+1<<":"<<endl;
	cin>>B[i];
	}
	; break;
	
	case 3:
	cout<<"Ingresa que materia quieres ver."<<endl;
	cin>>x;
	cout<<"La nota obtenida en esa materia es de: "<<B[x-1]<<endl;
	; break;
	
	case 4:
	cout<<"La suma total de los puntajes de las materias es de:"<<endl;
	for(int t=0; t<5; t++){
	suma=suma+B[t];	
	}
	cout<<suma<<endl;	
	promedio=suma/5;
	cout<<"El promedio total es de: "<<promedio<<endl;
	; break;
	case 5:
	cout<<"Ha salido del programa."<<endl;
	; break;
	
	default:
	cout<<"Esa opción no es válida."<<endl;
	}
	}
	}
	
	
	


